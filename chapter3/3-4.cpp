#include <iostream>
using namespace std;

int main(){
	char c;
	while(true){
		cout << "MAIN MENU: " << endl;
		cout << "l: left, r: right, q: quit -> ";
		cin >> c;
		switch(c){
			case 'q': break;
			case 'l': 
				cout << "LEFT MENU: " << endl;
				cout << "select a or b: " << endl;
				cin >> c;
				switch(c){
					case 'a': 
						cout << "you choose 'a'"<< endl;						break;
					case 'b':
				
						cout << "you choose 'b'"<< endl;
						break;
					default:
						cout << "you didn't choose 'a'or 'b'"<< endl;
				}
				break;
			case 'r': 
				cout << "RIGHT MENU: "<< endl;
				cout << "select a or b: " << endl
				cin << c;
				switch(c){
					case 'a':
						cout << "you choose 'a'"<< endl;
						break;
					case 'b':
						cout << "you choose 'b'"<< endl;
						break;
					default:
						cout << "you didn't choose 'a' or' b'"<< endl;
				}
				break;
			default:
				cout << "you must choose 'l' or 'r'" << endl;
		}
		cout << "quiting menu..." << endl;
	}
}

