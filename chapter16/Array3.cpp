//:Array3.cpp
//Built-in types as template arguments
#include <cassert>
#include <iostream>
using namespace std;

template<class T, int size = 100>
class Array{
    T array[size];
public:
    T& operator[](int index){
	assert(index >= 0 && index < size);
	return array[index];
    }
    int length() const{ return size;}
};

class Number{
    float f;
public:
    Number(float ff = 0.0f):f(ff){}
    Number& operator=(const Number& n){
	f = n.f;
	*this;
    }
    friend ostream&
	operator<<(ostream& os, const Number& x){
	    return os << x.f;
	}
};

template <class T, int size  = 100>
class Holder{
    Array<T, size>* np;
public:
    Holder():np(0){}
    T& operator[](int index){
	assert(index >= 0 && index < size);
	if(!np) np = new Array<T,size>;
	return np->operator[](index);
    }
    int length(){ return size;}
    ~Holder(){ delete np;}
};

int main(){
    Holder<Number> h;
    for(int i = 0; i < 20; i++){
	h[i] = i;
    }
    for(int i = 0; i < 20; i++){
	cout << h[i] << endl;
    }


}
