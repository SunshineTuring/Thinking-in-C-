//:Array2.cpp
//Non-inline template definition
#include <cassert>
template<class T>
class Array2{
    enum{ size = 100};
    T A[size];
public:
    T& operator[](int index);
};
template <class T>
T& Array2<T>::operator[](int index){
    assert(index >=0 && index < size);
    return A[index];
}

int main(){
    Array2<float> fa;
    fa[0] = 1.414;
}///:~
