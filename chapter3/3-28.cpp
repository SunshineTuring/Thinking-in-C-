//:3-28.cpp
#include <iostream>
using namespace std;

void func1(double d[], int size){
    for(int i = 0; i < size; i++){
	cout << "d[" << i << "] = " << d[i] << endl;
    }
}

void func2(unsigned char* ucp, int size, char c){
    for(int i = 0; i < size; i++)
	*ucp = c;
}

int main(){
    double d[10] = {0,0,0,0,0,0,0,0,0,0};
    func1(d, 10);
    for(int i = 0; i < 10; i++){
	unsigned char* c = reinterpret_cast<unsigned char*>(&d[i]);
	func2(c, sizeof(double), 1);	
    }
    func1(d, 10);
}
