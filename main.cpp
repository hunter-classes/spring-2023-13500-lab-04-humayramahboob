// Author: Humayra Mahboob
// Date: 2/23/2023
// Course: CS-135
// Assignment: LAB 4
#include <iostream>
#include <string>
#include "funcs.h"
using namespace std;

int main(){
    string result;
    result = box(4,7);
    cout << "box(4,7):\n";
    cout << result;
	cout << "\n---------------\n";
    string result2;
    result2 = checkerboard(11,6);
    cout << "checkerboard(11,6):\n";
    cout << result2;
	cout << "\n---------------\n";
    string result3;
    result3 = cross(8);
    cout << "cross(8):\n";
    cout << result3;
	cout << "\n---------------\n";
    string result4;
    result4 = lower(6);
    cout << "lower(6):\n";
    cout << result4;
	cout << "\n---------------\n";
    string result5;
    result5 = upper(6);
    cout << "upper(6):\n";
    cout << result5;
	cout << "---------------\n";
    string result6;
    result6 = trapezoid(12,5);
    cout << "trapezoid(12,5):\n";
    cout << result6;
	cout << "\n---------------\n";
    string result7;
    result7 = trapezoid(12,15);
    cout << "trapezoid(12,15):\n";
    cout << result7;
	cout << "\n---------------\n";
    string result8;
    result8 = checkerboard3x3(16,11);
    cout << "checkerboard3x3(16,11):\n";
    cout << result8;
	cout << "\n---------------\n";
	string result9;
	result9= checkerboard3x3(27,27);
	cout << "checkerboard(27,27):\n";
	cout << result9;
}