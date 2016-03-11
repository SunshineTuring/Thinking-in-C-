//:Stash2Test.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "Stash2.h"
using namespace std;

int main(){
    Stash2 intStash(sizeof(int));
    for(int i = 0; i < 100; i++)
	intStash.add(&i);
    for(int i = 0; i < intStash.count(); i++)
	cout << "intiStash["
	    << i << "] = "
	    << *(int*)intStash.fetch(i) << endl;
    Stash2 stringStash(sizeof(char) * 100);
    ifstream in("/media/4898584998583820/C++/chapter6/Stash2_test.cpp");
    string line;
    while(getline(in, line))
	stringStash.add((char*)line.c_str());
	//cout << line << endl;
    for(int i = 0; i < stringStash.count(); i++)
	cout << "stringStash[" << i << "] = "
	    << (char*)stringStash.fetch(i)
	    << endl; 
}

