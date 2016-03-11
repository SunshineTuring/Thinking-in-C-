//:4-6.cpp
#include <iostream>
using namespace std;
struct A{
    int a;
    void func1(int a){ this->a = a;}
    void func2(){cout << this->a << endl;}
};

int main(){
    A a;
    a.func1(2);
    a.func2();
}

