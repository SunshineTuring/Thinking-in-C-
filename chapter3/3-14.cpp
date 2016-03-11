#include <iostream>
using namespace std;

int main(){
    int i; 
    cout << "type a number an 'Enter'" << endl;
    cin >> i;
    i > 5? cout << "It's greater than five" << endl: (i < 5? cout << "It's less than five" << endl: cout << " It's equal to five" << endl );
}
