// TASK A:Write a program box.cpp that asks the user to 
//input width and height and prints a solid 
//rectangular box of the requested size using asterisks.

//Also, print a line Shape: between user input 
//and the printed shape (to separate input from output).
#include <iostream>
#include <string>
#include "funcs.h"
using namespace std;

std::string box(int width, int height) {
	cout << "Input height:" << height << endl;
	cout << "Input width:" << width << endl;
	cout << endl;
	cout << "Shape:" << endl;
	std::string result;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j ++) {
			result+= "*";
		}
		result+= "\n";
	}
	return result;
}

