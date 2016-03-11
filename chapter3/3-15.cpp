#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string str1;
    string str2;
    int i;
}stru;

int main(){
    stru str;
    str.str1 = "hello";
    str.str2 = "world!";
    str.i = 520;
    cout << "str1: " << str.str1 << endl;
    cout << "str2: " << str.str2 << endl;
    cout << "i: " << str.i << endl;
    stru* pstr = &str;
    pstr->str1 = "Happy";
    pstr->str2 = "new year!";
    pstr->i = 520;
    cout << "str1: " << str.str1 << endl;
    cout << "str2: " << str.str2 << endl;
    cout << "i: " << str.i << endl;   

}
