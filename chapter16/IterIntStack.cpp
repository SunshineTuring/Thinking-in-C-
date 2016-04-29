//:IterIntStack.cpp
//Simple integer stack with iterators
//{L} fibonacci
#include "fibonacci.h"
#include <cassert>
#include <iostream>
using namespace std;
class IntStack{
    enum { ssize = 100};
    int stack[ssize];
    int top;
public:
    IntStack() : top(0){}
    void push(int i){
	assert(top < ssize);
	stack[top++] = i;
    }
    int pop(){
	assert(top > 0);
	return stack[--top];
    }
    friend class IntStackIter;
};

class IntStackIter{
    IntStack& s;
    int index;
public:
    IntStackIter(IntStack& is) : s(is), index(0){}
    int operator++(){
	assert(index < s.top);
	return s.stack[++index];
    }
    int operator++(int){
	assert(index < s.top);
	return s.stack[index++];
    }
};
int main(){
    IntStack is;
    for(int i = 0; i < 20; i++)
	is.push(fibonacci(i));
    IntStackIter it(is);
    for( int j = 0; j < 20; j++)
	cout << it++ << endl;
}

