#include "stdafx.h"

EULERMATHLIBRARY_API int EulerMath::HelperFunctions::Test(int input)
{
	return input + 2;
}

EULERMATHLIBRARY_API std::string EulerMath::HelperFunctions::TestString(std::string input)
{
	std::string output = "You sent this over to the library: " + input;
	return output;
}