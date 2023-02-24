// TASK D: Write a program lower.cpp 
//that prints the bottom-left half of 
//a square, given the side length

#include <iostream>
#include <string>
#include "funcs.h"
using namespace std;

std::string lower(int length) {
	cout << "Input side length:" << length << endl;
	cout << endl;
	cout << "Shape:" << endl;
	std::string result;
	for (int i= 0; i < length; i++) {
		for (int j = 0; j <=i; j++) {
			result+="*";
		}
		result+="\n";
	}
	return result;
}


		