//:Stash3Test.cpp
#include <fstream>
#include <iostream>
#include "Stash3.h"
#include <cassert>
using namespace std;

int main(int argc, char** argv){
    ifstream in(argv[1]);
    assert(in);
    string line;
    int sizebuff = 80;
    Stash3 lineStash(sizeof(char) * sizebuff);
    while(getline(in, line))
	lineStash.add((char*)line.c_str());
    char *cp;
    int k = 0;  
    while((cp = (char*)lineStash.fetch(k++)))
	cout << cp << endl;

}
