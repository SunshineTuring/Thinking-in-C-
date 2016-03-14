//"SuperVar.cpp
#include <iostream>
using namespace std;

class SuperVar{
    enum{
	character,
	integer,
	floating_point
    } vartype;
    union{
	char c;
	int i;
	float f;
    };
public:
    SuperVar(char a);
    SuperVar(int b);
    SuperVar(float c);
    void print();
};

SuperVar::SuperVar(char a){
    c = a;
    vartype = character;
}
SuperVar::SuperVar(int b){
    i = b;
    vartype = integer;
}
SuperVar::SuperVar(float c){
    f = c;
    vartype = floating_point;
}

void SuperVar::print(){
    switch(vartype){
	case character: 
	    cout << "character: " << c << endl;
	    break;
	case integer: 
	    cout << "integer: " << i << endl;
	    break;
	case floating_point: 
	    cout << ":floating_point: " << f << endl;
	    break;
    }
}

int main(){
    SuperVar A('c'), B(10), C(1.44F);
    A.print();
    B.print();
    C.print();
}
