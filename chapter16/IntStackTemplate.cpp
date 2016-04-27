//:IntStackTemplate.cpp
//Simple stack template
#ifndef STACKTEMPLATE_H
#define STACKTEMPLATE_H
#include <cassert>

template<T>
class StackTemplate{
    enum{ssize = 100};
    T stak[ssize];
    int top;
public:
    StackTemplate():top(0){}
    void push(const T& i){
	assert(top < ssize);
	stack[top++] = i;
    }
    T pop(){
	assert(top>0);
	return stak[--top];
    }
    int size(){
	return top;
    }
};
#endif
