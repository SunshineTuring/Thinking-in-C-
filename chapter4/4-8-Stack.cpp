//:4-8-Stack.cpp
#include "4-8-Stack.h"
#include <cassert>

void Stack::Link::initialize(void* dat, Link* nxt){
    data = dat;
    next = nxt;
}

void Stack::initialize(){
    head = 0;
}

void Stack::push(void* dat){
    Link* new_Link = new Link;
    new_Link->initialize(dat, head);
    head = new_Link;
}

void* Stack::pop(){
    if(head == 0)
	return 0;
    void* dat = head->data;
    Link* old_head = head;
    head = head->next;
    delete old_head;
    return dat;    
}

void* Stack::peek(){
    if(head == 0)
	return 0;
    return head->data;
}

void Stack::cleanup(){
    assert(head == 0);
}
