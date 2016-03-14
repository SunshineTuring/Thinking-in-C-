//:Stash3.h

#ifndef STASH_3
#define STASH_3
class Stash3{
    int size;
    int quantity;
    int next;
    int increment;
    unsigned char* storage;
    void inflate(int incre);
public:
    Stash3(int sz, int incre = 100);
    Stash3(int sz, int iniquantity, int incre = 100);
    ~Stash3();
    int add(void* element);
    void* fetch(int index);
    int count();
};
#endif
