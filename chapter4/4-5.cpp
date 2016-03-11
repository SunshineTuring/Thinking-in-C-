//4-5.cpp
#include <iostream>
using namespace std;

struct A{
    int a;
    void func1(int i){ a = i;}
    void func2(){cout << a << endl;};
};

int main(){
    A a;
    a.func1(2);
    a.func2();
}
