//:TStackTest.cpp
//{T} TStackTest.cpp
#include "TStack.h"
#include <cassert>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class X{
public:
    virtual ~X(){cout << "~X " << endl;}
};

int main(){
    ifstream in("TStackTest.cpp");
    assert(in);
    Stack<string> textline;
    string line;
    while(getline(in, line)){
	textline.push(new string(line));
    }
    string* s;
    for(int i = 0; i < 10; i++){
	if((s = textline.pop()) == 0) break;
	cout << *s << endl;
	delete s;
    }
    Stack<X> xx;
    for(int j = 0; j < 10; j++)
	xx.push(new X);
}
