// PR c++/39056
// { dg-do compile }
// { dg-options "-std=gnu++0x" }

#include <complex>

__complex__ int i ({0});
std::complex<int> i2 ({0});
