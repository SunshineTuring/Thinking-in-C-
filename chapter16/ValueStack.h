//:ValueStack.h
//Holding objects by value in a stack
#ifndef VALUESTACK_H
#define VALUESTACK_H
#include <cassert>

template<class T, int ssize = 100>
class Stack{
    T stack[ssize];
    int top;
public:
    Stack():top(0){}
    void push(const T& x){
	assert(top < ssize);
	stack[top++] = x;
    }
    T peek() const { return stack[top-1];}
    T pop(){
	assert(top > 0);
	return stack[--top];
    }
};
#endif
