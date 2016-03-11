//:3-21.cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str[10];
    for(int i = 0; i < 10; i++){
	str[i] = " hello";
    }
    for(int i = 0; i < 10; i++)
	cout << "str[" << i << "] = " << str[i] << endl;
}
