cmake_minimum_required(VERSION 3.16)
project(euler_math_library)

set(CMAKE_CXX_STANDARD 14)

include_directories(EulerMathLibrary)

add_executable(euler_math_library
        EulerMath/main.cpp
        EulerMathLibrary/dllmain.cpp
        EulerMathLibrary/EulerMathLibrary.cpp
        EulerMathLibrary/EulerMathLibrary.h
        EulerMathLibrary/MathUtils.cpp
        EulerMathLibrary/MathUtils.h
        EulerMathLibrary/stdafx.cpp
        EulerMathLibrary/stdafx.h
        EulerMathLibrary/targetver.h)
