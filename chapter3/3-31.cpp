//:3-31.cpp
#include <iostream>
using namespace std;
#ifdef DEBUG_ON
	#define PA(A) cout << #A << " = " << A << endl;
#endif


int main(int argc, char** argv){
    cout << "-------test--------" << endl;
    int d = (1,2,3), a = 1, b = 2, c = 3;
    #ifdef DEBUG_ON
	PA(a);PA(b);PA(c);PA(d);PA(a+b);
    #endif
    cout << "d = " << d << endl;
}
