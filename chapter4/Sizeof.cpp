//:Sizeof.cpp
#include <iostream>
using namespace std;
#define P(A)\
    cout << #A << ": " << A << endl;
struct B{
    void f(){};
};

struct A{
    int i[100];
};

int main(){
    P(sizeof(A))
    P(sizeof(B))
//    P(&A)
  //  P(&B)
   // P(B::f)
    //P(A::i)
}
