//:3-34.cpp
#include <iostream>
#include <string>
using namespace std;

#define F(A) string A(){string s = "function " #A " is called....";\
   return s;}


F(a);F(b);F(c);F(d);F(e);

int main(){
    string (*f[])() = {a, b, c, d, e};
    char c, r;
    while(1){
	cout << "press a key from 'a' to 'e'" 
	    "or 'q' to quit" << endl;
	cin.get(c);cin.get(r);
	if(c == 'q')
	    break;
	else if(c < 'a' || c > 'e')
	    continue;
	cout << (*f[c - 'a'])()<< endl; 
    }
}
