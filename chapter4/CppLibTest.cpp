//:CppLibTest.cpp
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include "CppLib.h"

#ifdef DEBUG_MAIN
    #define P(A)\
	cout << #A << ": " << A << endl;
#endif
using namespace std;

int main(){
    Stash intStash;
    intStash.initialize(sizeof(int));
    for(int i = 0; i < 100; i++)
	intStash.add(&i);
    for(int j = 0; j < intStash.count(); j++)
	cout << "static_cast<int*>(intStahs.fetch(" 
	    << j << ")) = " 
	    << *(static_cast<int*>(intStash.fetch(j)))
	    << endl;
    intStash.cleanup();
    Stash stringStash;
    int buffsize = 80;
    stringStash.initialize(sizeof(char) * buffsize);
    ifstream in("/media/4898584998583820/C++/chapter4/CppLib.cpp");
    //ifstream in;//("hello.cpp");
    //in.open("hello.cpp");
    assert(in);
    string line;
    while(getline(in, line))
	#ifdef DEBUG_MAIN
	    P(line)
	#endif
	stringStash.add(line.c_str());
    for(int j = 0; j < stringStash.count(); j++)
	cout << "(char*) stringStash.fetch(" 
	    << j << ") = "
	    << (char*)stringStash.fetch(j)
	    << endl;
    stringStash.cleanup();
}
