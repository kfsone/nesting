CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
PROJECT(nesting)
SET(CXX_STANDARD_REQUIRED TRUE)

SET(
    SOURCES

    nesting.cpp
)

SET(
    HEADERS

    nesting.h
        hdr1.h
            inc1/config.h
            inc1/endian.h
            inc1/headers.h
            inc1/network.h
            inc1/other.h
            inc1/platform.h
        hdr2.h
            inc2/config.h
            inc2/misc.h
)
    

ADD_EXECUTABLE(nesting
    ${SOURCES}
    ${HEADERS}
)

SET_PROPERTY(TARGET nesting PROPERTY CXX_STANDARD 11)

