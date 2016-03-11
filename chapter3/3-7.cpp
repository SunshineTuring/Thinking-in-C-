#include <iostream>
#include <string>
using namespace std;

void func1(string* str ){
    *str += " func1 is called";
}

void func2(string& str){
    str += " func2 is called";
}

int main(){
    string str;
    cin >> str;
    cout << "str: " << str << endl;
    func1(&str);
    cout << "str after func1 is called: " << str << endl;
    func2(str);
    cout << "str after func2 is called: " << str << endl;    
}
