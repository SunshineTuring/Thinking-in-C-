//:3-24.cpp
#include <iostream>
using namespace std;

#define P(EX) cout << #EX": " << EX << endl;

int main(){
    long l[10];
    for(int i = 0; i < 10; i++)
	l[i] = i;
    long* lp = l;
    P(*lp);
    P(*++lp);
    P(*(lp+5));
    long* lp2 = lp + 5;
    P(*lp2);
    P(*(lp2-4));
    P(*--lp);
    P(lp2-lp);
}
