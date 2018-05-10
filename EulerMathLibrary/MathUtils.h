#pragma once

#ifdef __linux
#include <inttypes.h>
typedef int64_t __int64;
#endif

class MathUtils
{
    public:
        MathUtils();
        ~MathUtils();

        static __int64 Modulo(__int64 base, __int64 exponent, __int64 mod);
        static __int64 MulMod(__int64 a, __int64 b, __int64 mod);
};
