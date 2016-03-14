//:Men.h
#ifndef MEN_H
#define MEN_H
typedef unsigned char byte;

class Men{
    byte* men;
    int size;
    void ensureMinSize(int minSize);
public:
    Men(int sz = 0);
    ~Men();
    int msize();
    byte* pointer(int minSize = 0);
};
#endif
