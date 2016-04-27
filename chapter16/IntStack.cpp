//IntStack.cpp
//Simple integer stack
//{L} fibonacci
#include "fibonacci.h"
#include <cassert>
#include <iostream>
using namespace std;
class IntStack{
    enum{ssize = 100};
    int stack[ssize];
    int top;
public:
    IntStack():top(0){}
    void push(int i){
	assert(top < ssize);
	stack[top++] = i;
    }
    int pop(){
	assert(top > 0);
	return stack[--top];
    } 
};

int main(){
    IntStack is;
    for(int i = 0; i < 20; i++){
	is.push(fibonacci(i));
    }
    for(int i = 0; i < 20; i++)
	cout << is.pop() << endl;
}///:~
