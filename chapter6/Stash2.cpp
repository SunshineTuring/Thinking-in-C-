//:Stash2.cpp
#include "Stash2.h"
#include <cassert>
using namespace std;

Stash2::Stash2(int sz , int incre){
    size = sz;
    next = 0;
    quantity = 0;
    storage = 0;
    increment = incre;
}

Stash2::~Stash2(){
    if(storage != 0)
	delete [] storage;
}

int Stash2::add(void* element){
    if(next >= quantity)
	inflate(increment);
    char* c = (char*) element;
    for(int i = 0; i < size; i++)
	storage[i+next*size] = c[i];
    next++;
    return (next-1);
}

void* Stash2::fetch(int i){
    assert(i >= 0);
    if(i >= next)
	return 0;
    return &storage[i*size];    
}

int Stash2::count(){
    return next;
}

void Stash2::inflate(int increment){
    assert(increment > 0);
    int new_bytes = (quantity + increment) * size;
    int old_bytes = quantity * size;
    char* ne = new char[new_bytes];
    for(int i = 0; i < old_bytes; i++)
	ne[i] = storage[i];
    delete [] storage;
    storage = ne;
    quantity += increment;
}
