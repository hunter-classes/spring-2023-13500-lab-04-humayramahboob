// TASK B: Write a program checkerboard.cpp that 
//asks the user to input width and height 
//and prints a rectangular checkerboard of 
//the requested size using asterisks and 
//spaces (alternating).
#include <iostream>
#include <string> 
#include "funcs.h"
using namespace std;

std::string checkerboard(int width, int height) {
	cout << "Input height:" << height << endl;
	cout << "Input width:" << width << endl;
	cout << endl;
	cout << "Shape:" << endl;
	std::string result;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if ((i + j) % 2 == 0) {
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

