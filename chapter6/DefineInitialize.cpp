//:DefineInitialize.cpp
#include <iostream>
#include <string>
using namespace std;

class G {
    int i;
public:
    G(int ii);
};

G::G(int ii){
    i = ii;
}

int main(){
    cout << "initializetion value? " << endl;
    int retval = 0;
    cin >> retval;
    int y = retval + 3;
    G g(y);
}///:~
