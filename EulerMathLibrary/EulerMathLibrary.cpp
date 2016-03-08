#include "stdafx.h"
#include "MathUtils.h"

EULERMATHLIBRARY_API bool EulerMath::HelperFunctions::isPrime(__int64 number)
{
    return isMillerRabinPrime(number, 5);
}

//http://www.sanfoundry.com/cpp-program-implement-miller-rabin-primality-test/
//
EULERMATHLIBRARY_API bool EulerMath::HelperFunctions::isMillerRabinPrime(__int64 p, int iteration)
{
    //negative numbers and 0,1
    if (p < 2)
	return false;

    //divisible by 2?
    if (p != 2 && p % 2 == 0)
	return false;

    __int64 s = p - 1;
    while (s % 2 == 0)
	s /= 2;

    for (int i = 0; i < iteration; i++)
    {
	__int64 a = rand() % (p - 1) + 1, temp = s;
	__int64 mod = MathUtils::Modulo(a, temp, p);
	while (temp != p - 1 && mod != 1 && mod != p - 1)
	{
	    mod = MathUtils::MulMod(mod, mod, p);
	    temp *= 2;
	}

	if (mod != p - 1 && temp % 2 == 0)
	    return false;
    }

    return true;
}

EULERMATHLIBRARY_API bool EulerMath::HelperFunctions::isPerfectSquare(__int64 number)
{
    int h = number & 0xF;  // h is the last hex "digit"
    if (h > 9)
	return false;

    // Use lazy evaluation to jump out of the if statement as soon as possible
    if (h != 2 && h != 3 && h != 5 && h != 6 && h != 7 && h != 8)
    {
	int t = (int)floor(sqrt((double)number) + 0.5);
	return (t*t == number);
    }

    return false;
}
