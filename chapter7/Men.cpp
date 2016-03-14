#include "Men.h"
#include <cstring>
using namespace std;    
    Men::Men(int sz){
	size = sz;
	men = 0;
	ensureMinSize(size);
    }

    Men::~Men(){delete []men;}
    
    int Men::msize(){
	return size;	
    }
    
    byte* Men::pointer(int minSize){
	ensureMinSize(minSize);
	return men;	    
    }
    
    void Men::ensureMinSize(int minSize){
	if(size < minSize){
	    byte* m = new byte[minSize];
	    memset(m+size, 0, minSize-size);
	    memcpy(m, men, size);
	    delete []men;
	    men = m;
	    size = minSize;
	}
    }

