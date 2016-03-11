//:Rotation.cpp
#include "Rotation.h"
unsigned char rol(unsigned char val){
    int highbit = 0;
    if (val & (1 << 7))
	highbit = 1;
    val <<= 1;
    val |= highbit;
    return val;
}

unsigned char ror(unsigned char val){
    int lowbit = 0;
    if (val & 1)
	lowbit = 0x80;
    val >>= 1;
    val |= lowbit;
    return val;
}
///:~
