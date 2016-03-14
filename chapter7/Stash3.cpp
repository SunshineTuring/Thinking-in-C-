//:Stash3.cpp
#include "Stash3.h"
#include <cassert>
#include <iostream>
using namespace std;

Stash3::Stash3(int sz, int incre){
    size = sz;
    quantity = 0;
    next = 0;
    increment = incre;
    storage = 0;
}

Stash3::Stash3(int sz, int iniquantity, int incre){
    size = sz;
    quantity = iniquantity;
    next = 0;
    increment = incre;
    storage = 0;    
    inflate(quantity);
}

Stash3::~Stash3(){
    if ( storage != 0)
	delete [] storage;
}

int Stash3::add(void* element){
    if(next >= quantity)
	inflate(increment);
    char* c = (char*) element;
    int startBytes = next*size;
    for(int i = 0; i < startBytes; i++)
	storage[startBytes+i] = c[i];
    next++;
    return (next-1);
}

void* Stash3::fetch(int index){
    assert(index>=0 && index <= quantity);
    if(index >= next )
	return 0;
    return &(storage[index * size]);
}

int Stash3::count(){
    return next;
}

void Stash3::inflate(int incre){
    assert(incre > 0);
    if(incre == 0)
	return ;
    int new_quantity = quantity + incre;
    int new_bytes = new_quantity * size;
    int old_bytes = quantity * size;
    unsigned char* c = new unsigned char[new_bytes];
    for(int i = 0; i < old_bytes; i++)
	c[i] = storage[i];
    delete [] storage;
    storage = c;   
    quantity = new_quantity; 
}
