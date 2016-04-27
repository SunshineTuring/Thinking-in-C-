//:TPStashTest.cpp
//{L}AutoCounter.cpp
#include "AutoCounter.h"
#include "TPStash.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    PStash<AutoCounter> acStash;
    for(int i = 0; i < 10; i++)
	acStash.add(AutoCounter::create());
    for(int j = 0; j < 5; j++)
	delete acStash.remove(j);
    cout << "Removing two without deleting them: " << endl;
//  cout << acStash.remove(5) << endl;
//  cout << acStash.remove(6) << endl;
    cout << "The destructor cleanup the rest:"
	<< endl;   
}
