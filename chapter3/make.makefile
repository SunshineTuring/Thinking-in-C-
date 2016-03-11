CPP = g++

.SUFFIXES: .out .cpp
.cpp.out:
	$(CPP) -o /home/gary-liu/c++_exe/3-24.out $<
all: 3-24.out
