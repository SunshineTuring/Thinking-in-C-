//:Constructorl1_main.cpp
#include "Constructorl1.h"
#include <iostream>
using namespace std;

int main(){
    cout << "before opening brace" << endl;
    {
	Tree tree(12);
	cout << "after Tree creation" << endl;
	tree.printsize();
	tree.grow(4);
	cout << "before closing brace" << endl;
    }
    cout << "after closing brace" << endl;
}
