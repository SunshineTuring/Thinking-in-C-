//:3-13.cpp

#include "printBinary.h"
#include "Rotation.h"
#include <iostream>
using namespace std;

int main(){
    unsigned char val = 0x24;
    cout << "before shiftting: " << endl;
    printBinary(val);
    cout << "shift left:" << endl;

    for (int i = 1; i < 9; i++){
	cout << i << ": ";	
	val = rol(val);
	printBinary(val);
	
    }
    cout << endl;
    cout << "shift right:" << endl;
    for (int i = 1; i < 9; i++){
	cout << i << ": ";	
	val = ror(val);
	printBinary(val);
    }
}///:~
