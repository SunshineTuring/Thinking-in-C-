//:Stack3.h
#ifndef STACK3_H
#define STACK3_H
    class Stack3{
	struct Link{
	    void* data;
	    Link* next;
	    Link(void* dt, Link* nxt);
	    ~Link();
	} *head;
    public:
	Stack3();
	~Stack3();
	void push(void* dt);
	void* pop();
	void* peak();
    };

#endif
