//:4-2.cpp
#include <iostream>
using namespace std;

struct A{
    void func(){ cout << "hello struct A" << endl;}
};

int main(){
    A a;
    a.func();
}
