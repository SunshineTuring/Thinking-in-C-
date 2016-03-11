//:printBinary.cpp
#include "printBinary.h"
#include <iostream>
using namespace std;

void printBinary(unsigned char val){
//    cout << hex << (int) val << ": " ;
    for(int i = 7; i >= 0; i--){
	    if(val & (1<<i) )
		cout << "1";
	    else
		cout << "0";
	}
	cout << endl;
}
