#include "CppLib.h"
#include <iostream>
#include <cassert>
using namespace std;
int increment = 100;

#ifdef DEBUG
    #define P(A) \
	cout << "Stash: "#A << ": " << A << endl;
#endif

void Stash::initialize(int size){
    Stash::size = size;
    #ifdef DEBUG
	P(size);
    #endif
    quantity = 0;
    next = 0;
    storage = 0;
}

void Stash::cleanup(){
    if(storage != 0){
	cout << "frezing storage..." << endl;
	delete [] storage;	
    }
}

int Stash:: add(const void* element){
    if(next >= quantity)
	inflate(increment);
    unsigned char* e = (unsigned char*)(element);
    #ifdef DEBUG
	P(e)
    #endif
    int startbytes = next * size;
    for(int i = 0; i < size; i++)
	storage[startbytes + i] = e[i];
    next++;
    return (next-1);
}
void* Stash::fetch(int index){
    assert(index >= 0);
    if(index >= next)
	return 0;
    return &(storage[index * size]);
}

int Stash::count(){
    return next;
}

void Stash::inflate(int increase){
    assert(increase > 0);
    int new_quantity = quantity + increase;
    int new_bytes = new_quantity * size;
    int old_bytes = quantity * size;
    #ifdef DEBUG
	P(new_quantity);
	P(quantity);
	P(new_bytes);
	P(old_bytes);
    #endif
    unsigned char* new_storage = new unsigned char[new_bytes];
    for(int i = 0; i < old_bytes; i++)
	new_storage[i] = storage[i];
    delete []storage;
    storage = new_storage;
    quantity = new_quantity;    
}
