//:3-20.cpp
#include <iostream>
using namespace std;

typedef struct {
    int i, j, k;
} ThreeDpoint;

int main(){
    cout << sizeof(ThreeDpoint) << sizeof(ThreeDpoint) << endl;
    ThreeDpoint td;
    cout << "&td: " << (long)&td << endl;
    cout << "&td.i: " << (long)&td.i << endl;
    cout << "&td.j: " << (long)&td.j << endl;
    cout << "&td.k: " << (long)&td.k << endl;
}///:~
