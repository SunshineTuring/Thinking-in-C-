//:3-26.cpp
#include <iostream>
using namespace std;

void func(void* vp, int size, char c){
    char* cp = static_cast<char*>(vp);
    for(int i = 0; i < size; i++,cp++)
	*cp = c;
}

int main(){
    int i[10];
    for(int j = 0; j < 10; j++)
	cout << "i[" << j << "] = " << i[j] << endl;

    void* vp = static_cast<void*>(&i);
    for(int j = 0; j < 10; j++)
	func(vp, 10*sizeof(int), 0);
    
    for(int j = 0; j < 10; j++)
	cout << "i[" << j << "] = " << i[j] << endl;
}
