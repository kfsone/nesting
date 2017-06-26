#pragma once

#define INC1_NETWORKING 0

#if !defined(_MSC_VER)
    #include "unistd.h"
#else
    #define NOMINMAX
    #include <Winsock2.h>
#endif

