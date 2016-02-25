#include "stdafx.h"

EULERMATHLIBRARY_API bool EulerMath::HelperFunctions::isPrime(long number)
{
	return false;
}

EULERMATHLIBRARY_API bool EulerMath::HelperFunctions::isPerfectSquare(long number)
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

EULERMATHLIBRARY_API int EulerMath::HelperFunctions::Test(int input)
{
	return input + 2;
}

EULERMATHLIBRARY_API std::string EulerMath::HelperFunctions::TestString(std::string input)
{
	std::string output = "You sent this over to the library: " + input;
	return output;
}