//:Array.cpp
#include <cassert>
#include <iostream>
using namespace std;

template<class T>
class Array{
    enum{ size = 100};
    T A[size];
public:
    T& operator[](int index){
	assert(index>=0 && index < size);
	return A[index];
    }
};
int main(){
    Array<int> ia;
    Array<float> fa;
    for(int i = 0; i < 20; i++){
	ia[i] = i*i;
	fa[i] = float(i)*1.414;
    }
    for(int i = 0; i < 20; i++){
	cout << i << ":" << ia[i]
	    << ", " << fa[i] << endl;	
    } 
}
