//:Stack3Test.cpp
#include "Stack3.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
using namespace std;

int main(int argc, char** argv){
    if(argc == 0)
	return 0;
    ifstream in(argv[1]);
    assert(in);
    string line;
    Stack3 stringStack;
    while(getline(in, line))
	stringStack.push(new string(line));
    string* s;
    while(s = (string*)stringStack.pop())
	cout << *s << endl;

}
