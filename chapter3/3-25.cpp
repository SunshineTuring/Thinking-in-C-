//:3-25.cpp
#include <iostream>
#include <cstdlib>
#include "printBinary.h"
using namespace std;

int main(int argv, char** argc){
    if(argv < 1){
	cout << "input a float";
	return 1;
    }
    float f = atof(argc[1]);
    unsigned char* cp = (unsigned char*)&f;
    for(int i = 0; i < sizeof(float); i++)
	printBinary(*cp++);
}
