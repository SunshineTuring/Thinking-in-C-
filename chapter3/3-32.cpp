//:3-32.cpp
#include <iostream>
using namespace std;

int func(double d){
    cout << "func is called......" << endl;
}

int main(){
int (*fp)(double);
fp = func;
double d = 2.0;
(*fp)(d);
}
