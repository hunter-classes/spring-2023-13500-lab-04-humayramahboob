// TASK C: Write a program cross.cpp 
//that asks the user to input the shape 
//size, and prints a diagonal cross of that dimension

#include <iostream>
#include <string>
#include "funcs.h"
using namespace std;

std::string cross(int size) {
	cout << "Input size:" << size << endl;
	cout << endl;
	cout << "Shape:" << endl;
	std::string result;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j || size-j-1 == i) {
				result+="*";
			}
			else {
				result+=" ";
			}
		}
		result+="\n";
	}
	return result;
}


