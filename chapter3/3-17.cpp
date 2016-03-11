//:3-17.cpp

#include <iostream>
using namespace std;

union Packed{
    double d;
    char c;
    int i;
    float f;
    long l;
    long double ld;
};

int main(){
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(long): " << sizeof(long) << endl;
    cout << "sizeof(long double): " << sizeof(long double) << endl;
    cout << "sizeof(Packed): " << sizeof(Packed) << endl;
    Packed p;
    p.i = 20;
    cout << "p.d: " << p.d << endl;
    cout << "p.c: " << p.c << endl;
    cout << "p.i: " << p.i << endl;
    cout << "p.f: " << p.d << endl;
    cout << "p.l: " << p.l << endl;
    cout << "p.ld: " << p.ld << endl;
}
