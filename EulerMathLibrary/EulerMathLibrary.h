#pragma once

//
// http://www.cplusplus.com/forum/general/1125/
// https://msdn.microsoft.com/en-us/library/ms235636.aspx
//
#ifndef __linux
#ifdef EULERMATHLIBRARY_EXPORTS
#define EULERMATHLIBRARY_API __declspec(dllexport)
#else
#define EULERMATHLIBRARY_API __declspec(dllimport)
#endif //ifdef
#else
#define EULERMATHLIBRARY_API
#endif //ifndef

namespace EulerMath
{
    // This class is exported from the EulerMathLibrary.dll
    class HelperFunctions
    {
    public:
	static EULERMATHLIBRARY_API bool isPerfectSquare(__int64 number);
	static EULERMATHLIBRARY_API bool isPrime(__int64 number);
	static EULERMATHLIBRARY_API bool isMillerRabinPrime(__int64 n, int iteration);
	static EULERMATHLIBRARY_API __int64 divisorCount(__int64 n);
    };
}
