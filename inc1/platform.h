#pragma once

#define SOMETHING_SOMETHING 2

#include "endian.h"

#define MORE_SOMETHINGS 3

#if defined(_WIN32)
    #define NOMINMAX
    #define WIN32_LEAN_AND_MEAN
    #include <Windows.h>
#endif

