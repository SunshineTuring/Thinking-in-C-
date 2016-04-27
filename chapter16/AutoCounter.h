//AutoCounter.h
#ifndef AUTOCOUNT_H
#define AUTOCOUNT_H
#include <cassert>
#include <iostream>
#include <set>
#include <string>
class AutoCounter{
    static int count;
    int id;
    class CleanupCheck{
	std::set<AutoCounter*> trace;
    public:
	void add(AutoCounter* ap){
	    trace.insert(ap);
	}
	void remove(AutoCounter* ap){
	    assert(trace.erase(ap) == 1);	
	}
	~CleanupCheck(){
	    std::cout<< "~CleanupCheck()" << std:: endl;
	    assert(trace.size() == 0);
	}
    };
    static CleanupCheck verifier;
    AutoCounter():id(count++){
	verifier.add(this);
	std::cout << "created["<<id<<"]"<<std::endl;
    }
    AutoCounter(const AutoCounter&);
    void operator=(const AutoCounter&);
public:
    static AutoCounter* create(){
	return new AutoCounter();
    }
    ~AutoCounter(){
	std::cout<<"destroying["<<id<<"]"<<std::endl;
    verifier.remove(this);
    }
friend std::ostream& operator<<(
    std::ostream& os, const AutoCounter& ac){
	return os << "AutoCounter " << ac.id;
    }
friend std::ostream& operator<<(
    std::ostream& os, const AutoCounter* ac){
	return os << "AutoCounter " << ac->id;
    }

};
//AutoCounter::CleanupCheck AutoCounter::verifier;
//int AutoCounter::count = 0;
#endif
