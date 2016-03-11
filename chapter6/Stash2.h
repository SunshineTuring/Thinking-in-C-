//:Stash2.h
#ifndef STASH2_H
#define STASH2_H
class Stash2{
    int size;
    int next;
    int quantity;
    int increment;
    char* storage;
    void inflate(int increment);
public:
    Stash2(int sz, int incre = 100);
    ~Stash2();
    int add(void* element);
    void* fetch(int i);
    int count();
};
#endif
