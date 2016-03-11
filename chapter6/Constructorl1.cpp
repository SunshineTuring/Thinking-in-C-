//:Constructorl1.cpp

#include <iostream>
#include "Constructorl1.h"
using namespace std;

Tree::Tree(int initialHeight){
    height = initialHeight;
}

Tree::~Tree(){
    cout << "inside Tree desconstructor" << endl;
    printsize();
}

void Tree::grow(int years){
    height += years;
}

void Tree::printsize(){
    cout << "Tree height is " << height << endl;
}

