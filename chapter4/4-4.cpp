//:4-4.cpp
#include <iostream>
using namespace std;

struct A{
    int a;
};
void func1(A* a, int i){
    a->a = i;
}

void func2(A* a){
    cout << "A->a = " << a->a << endl;
}

int main(){
    A a;
    func1(&a, 2);
    func2(&a);
}
