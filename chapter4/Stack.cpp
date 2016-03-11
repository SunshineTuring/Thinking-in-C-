//:Stack.cpp
#include <iostream>
#include <cassert>
#include "Stack.h"
#include <string>

using namespace std;
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

void* Stack::peek(){
    assert(head != 0);
    return head->data;
}

void* Stack::pop(){
    if(head == 0) return 0;
    void* data = head->data;
    Link* old_Link = head;
    head = head->next;
    string* s ;
    cout << "*(string*)old_Link->data" << *(string*)data << endl;
    delete old_Link;
    cout << "(string*)old_Link->data" << *(string*)data << endl;   
    return data;
}


void Stack::cleanup(){
    assert(head == 0);
}///:~
