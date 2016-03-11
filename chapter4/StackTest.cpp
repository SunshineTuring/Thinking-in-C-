//:StackTest.cpp
#include <iostream>
#include "Stack.h"
#include <string>
#include <fstream>
#include <cassert>

using namespace std;

int main(int argc, char** argv){
    assert(argc >= 2);
    ifstream in(argv[1]);
    assert(in);
    string line;
    Stack textLines;
    textLines.initialize();
    while(getline(in, line))
	textLines.push(new string(line));
    string* s;
    while((s = (string*)textLines.pop()) != 0){
	cout << *s << endl;
	delete s;
    }
}
