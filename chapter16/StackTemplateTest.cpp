//:StackTemplate.cpp
//Test simple stack template
//{L} fibonacci
#include "fibonacci.h"
#include "StackTemplate.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    StackTemplate<int> is;
    for(int i = 0; i < 20; i++){
	is.push(i);
    }
    for(int i = 0; i < 20; i++){
	cout << is.pop()<< endl;
    }
    ifstream in("StackTemplateTest.cpp");
    assert(in);
    string line;
    StackTemplate<string> strings;
    while(getline(in,line)){
	strings.push(line);
    }
    while(strings.size() > 0){
	cout << strings.pop() << endl;
    }
    


}
