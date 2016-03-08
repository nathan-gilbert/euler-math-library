#include "MathUtils.h"

MathUtils::MathUtils()
{
}

MathUtils::~MathUtils()
{
}

/*
* modular exponentiation
*/
__int64 MathUtils::Modulo(__int64 base, __int64 exponent, __int64 mod)
{
    __int64 x = 1;
    __int64 y = base;
    while (exponent > 0)
    {
	if (exponent % 2 == 1)
	    x = (x * y) % mod;
	y = (y * y) % mod;
	exponent = exponent / 2;
    }
    return x % mod;
}

/*
* calculates (a * b) % c taking into account that a * b might overflow
*/
__int64 MathUtils::MulMod(__int64 a, __int64 b, __int64 mod)
{
    __int64 x = 0, y = a % mod;
    while (b > 0)
    {
	if (b % 2 == 1)
	{
	    x = (x + y) % mod;
	}
	y = (y * 2) % mod;
	b /= 2;
    }
    return x % mod;
}