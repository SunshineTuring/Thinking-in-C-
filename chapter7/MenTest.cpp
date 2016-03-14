//:MenTest.cpp
#include "Men.h"
#include <cstring>
#include <iostream>
using namespace std;

class MyString{
    Men* buf;
public:
    MyString();
    MyString(char* ch);
    ~MyString();
    void concat(char* str);
    void print (ostream& os);
};

MyString::MyString(){
    buf = 0;
}
MyString::MyString(char* str){
     
    buf = new Men(strlen(str) + 1);
    strcpy((char*)buf->pointer(), str);
}
MyString::~MyString(){delete buf;}
void MyString::concat(char* str){
    if(!buf)
	buf = new Men;
    strcat((char*)buf->pointer(buf->msize() + strlen(str) + 1)
	    , str);
}

void MyString::print(ostream& os){
    if(!buf) return;
    os << buf->pointer() << endl;
}

int main(){
    MyString s("my test string");
    s.print(cout);

    s.concat(" some additional stuff");
    s.print(cout);
    MyString s2;
    s2.concat("Using default constructor");
    s2.print(cout);
}   
