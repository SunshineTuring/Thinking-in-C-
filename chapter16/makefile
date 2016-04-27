CPP = g++
OFLAG = -o
# #DE_PATH = /home/gary-liu/c++_exe/
all: \
    IntStack\
    Array\
    Array2\
    StackTemplate\
    Array3\
    TStackTest\
    TPStashTest
IntStack: IntStack.cpp fibonacci.cpp
	$(CPP) $(OFLAG)IntStack \
IntStack.cpp fibonacci.cpp
Array: Array.cpp
	$(CPP) $(OFLAG)Array Array.cpp
Array2: Array2.cpp
	$(CPP) $(OFLAG)Array2 Array2.cpp
StackTemplate: StackTemplateTest.cpp 
	$(CPP) $(OFLAG)StackTemplate StackTemplateTest.cpp 
Array3: Array3.cpp
	$(CPP) $(OFLAG)Array3 Array3.cpp
TStackTest: TStackTest.cpp
	$(CPP) $(OFLAG)TStackTest TStackTest.cpp
TPStashTest: TPStashTest.cpp AutoCounter.cpp TPStash.h
	$(CPP) $(OFLAG)TPStashTest TPStashTest.cpp AutoCounter.cpp
