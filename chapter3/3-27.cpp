//:3-27.cpp
#include <iostream>
using namespace std;
int main(){
    const double cd[10] = {0};
    volatile double vd[10] = {0};
    double* c = const_cast<double*>(cd);
    double* v = const_cast<double*>(vd);
    for(int i = 0; i < 10; i++,c++,v++){
	*c = 2.0;
	*v = 1.0;	
    }
    for(int i = 0; i < 10; i++){
	cout << "cd[" << i <<"] = " << cd[i] << endl;
	cout << "vd[" << i <<"] = " << vd[i] << endl;
    }
}
