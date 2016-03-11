//:Stack3.cpp
#include "Stack3.h"
#include <cassert>

Stack3::Link::Link(void* dt, Link* nxt){
    data = dt;
    next = nxt;
}

Stack3::Link::~Link(){}

Stack3::Stack3(){
    head = 0;
}

Stack3::~Stack3(){
    assert(head == 0);
}

void Stack3::push(void* dt){
    Link* l = new Link(dt, head);
    head = l;
}

void* Stack3::pop(){
    if(head == 0) return 0;
    void* dat = head->data;
    Link* l = head;
    head = head->next;
    delete l;
    return dat;    
}

void* Stack3::peak(){
    return head;
}


