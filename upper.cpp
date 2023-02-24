// TASK E: Write a program upper.cpp 
//that prints the top-right half of a 
//square, given the side length.

#include <iostream>
#include <string>
#include "funcs.h"
using namespace std;

std::string upper(int length) {
	cout << "Input side length:" << length << endl;
	cout << endl;
	cout << "Shape:" << endl;
	std::string result;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (j < i) {
				result+=" ";
			}
			else {
				result+="*";
			}
		}
		result+="\n";
	}
	return result;
}



				