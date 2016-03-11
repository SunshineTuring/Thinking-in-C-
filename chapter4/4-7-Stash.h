//:4-7-Stash.h
#ifndef F_S_STASH_H
#define F_S_STASH_H
    struct Stash{
	int size;
	int quantity;
	int next;
	int increment;
	char* storage;
	void initialize(int sz, int ince = 100);
	int add(const void* element);
	int count();
	void* fetch(int index);
	void inflate(int increcment);
	void cleanup();
    };///:~
#endif
