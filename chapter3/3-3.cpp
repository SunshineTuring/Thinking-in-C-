#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int str_int; 
	while(true){
		cin >> str;
		if(str == "dog")
			str_int = 0;
		else if(str == "cat")
			str_int = 1;
		else
			str_int = 2;
		if(str_int != 2)
		switch(str_int){
			case 0: cout << "dog" << endl;
				break;
			case 1: cout << "cat" << endl;
				break;
			default : cout << "nothing" << endl; 
		}
		else
			break;		
	}
}
