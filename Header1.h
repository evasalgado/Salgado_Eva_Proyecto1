// header1.h 
// In contrast to header2.h, here we have no interaction with 
// the user interface. This header contains only business 
// logic in standard C++ (including most of C++11, C++14 and C++17)

#pragma once
namespace N_header_1 {
    inline int plus_1(int x) {
        return x + 1;
    }
}