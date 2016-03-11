//:4-7-main.cpp
#include <iostream>
#include "4-7-Stash.h"

using namespace std;

int main(){
    Stash doubleStash;
    doubleStash.initialize(sizeof(double));
    double d;
    for(int i = 0; i < 25; i++)
	doubleStash.add((d = i,&d));
    for(int i = 0; i < doubleStash.count(); i++)
	cout << "fetch[" << i << "] = "
	    << *((double*)doubleStash.fetch(i)) << endl;
    
}
