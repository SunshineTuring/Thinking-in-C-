//4-7-Stash.cpp
#include "4-7-Stash.h"
#include <cassert>
#include <iostream>
using namespace std;

void Stash::initialize(int sz, int incre ){
    size = sz;
    quantity = 0;
    next = 0;
    increment = incre;
    storage = 0;
}

int Stash::add(const void* element){
    if(next >= quantity)
	inflate(increment);
    int start_bytes = next * size;
    char* e = (char*)element;
    for(int i = 0; i < size; i++)
	storage[start_bytes + i] = e[i];
    next++;
    return (next-1);
}

int Stash::count(){
    return next;
}

void* Stash::fetch(int index){
    assert(index >= 0);
    assert(index < quantity);
    if(index >= next)
	return 0;
    return &storage[index * size];
}

void Stash::inflate(int increment){
    assert(increment > 0);
    int new_quantity = quantity + increment;
    int new_bytes = new_quantity * size;
    int old_bytes = quantity * size;
    char* c = new char[new_bytes];
    for(int i = 0; i < old_bytes; i++)
	c[i] = storage[i];
    delete[] storage;
    storage = c;
    quantity = new_quantity;
}

void Stash::cleanup(){
    assert(storage != 0);
    cout << "cleanup...." << endl;
    delete[] storage;
    quantity = 0;
    next = 0;
    size = 0;
}
