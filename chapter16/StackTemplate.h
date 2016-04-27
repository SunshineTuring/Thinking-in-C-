//:IntStackTemplate.cpp
//Simple stack template
#ifndef STACKTEMPLATE_H
#define STACKTEMPLATE_H
#include <cassert>

template<class T>
class StackTemplate{
    enum{ssize = 100};
    T stack[ssize];
    int top;
public:
    StackTemplate():top(0){}
    void push(const T& i){
	assert(top < ssize);
	stack[top++] = i;
    }
    T pop(){
	assert(top>0);
	return stack[--top];
    }
    int size(){
	return top;
    }
};
#endif
