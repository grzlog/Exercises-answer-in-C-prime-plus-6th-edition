// Inch2Foot.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>


int main()
{
	const int factor = 12;
	using namespace std;
	cout << "Please enter your height(inch):_____\b\b\b\b\b";
	double height;
	cin >> height;
	cout << "Your height is: " << height << " (inch)" << endl;
	cout << "which is equal to " << height / factor << " (foot)" << endl;
    return 0;
}

