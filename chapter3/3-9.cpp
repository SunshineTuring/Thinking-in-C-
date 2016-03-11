#include <iostream>
using namespace std;

void func(){
    static int i = 0;
    cout << "i: " << i++ << endl;
}

int main(){
    for(int j = 0; j < 10; j++)
    func();
}
