//:CLibTest.cpp
//{L}CLib
#include "Clib.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
using namespace std;

int main(){
    CStash intStash, stringStash;
    initialize(&intStash, sizeof(int));
    for(int i = 0; i < 100; i++)
	add(&intStash, &i);
    for (int i = 0; i < count(&intStash); i++)
	cout << "intStash[" << i << "] = " 
	    << *(int *) fetch(&intStash, i) 
	    << endl;
    initialize(&stringStash, 80);
    ifstream in("/media/4898584998583820/C++/chapter4/CLibTest.cpp");
    //in.open("/media/4898584998583820/C++/chapter4/CLibTest.cpp");
    assert(in);
    string line;
    while(getline(in, line))
	add(&stringStash, line.c_str());
    for(int i = 0; i < count(&stringStash); i++)
	cout << "stringStahs[" << i << "] = " 
	    << (char*)fetch(&stringStash, i)   
	    << endl;
}
