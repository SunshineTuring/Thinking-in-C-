//:4-8-main.cpp
#include "4-8-Stack.h"
#include <iostream>
using namespace std;

int main(){
    Stack doubleStack;
    doubleStack.initialize();
    //double d = 0;
    for(int i = 0; i < 25; i++)
	doubleStack.push(new double(i));
    for(int i = 0; i < 25; i++)
	cout << "doubleStack.pop()" 
	    << *(double*)doubleStack.pop()
	    << endl;
    doubleStack.cleanup(); 
}
