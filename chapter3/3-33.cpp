//:3-33.cpp
#include <iostream>
using namespace std;
float (* func(int))(char){
    cout << "func is called...." << endl;
}

int main(){
   float (*(*fp)(int))(char);
   fp = func;
   int i = 10;
   (*fp)(i);

}
