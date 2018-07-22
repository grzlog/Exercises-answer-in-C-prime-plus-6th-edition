#include <iostream>

int * setValue(int * arr, int length, int value);

int main() {
	using namespace std;
	int length, value;
	int * myarr;
	cout << "please enter the length of array: " ;
	cin >> length;
	cout << "your length is:" << length << endl;
	cout << "please enter the value you want to set: ";
	cin >> value;
	cout << "your value is:" << value << endl;
	myarr = setValue(myarr, length, value);
	cout << "your array is:" <<endl;
	for (int elem=0; elem < length; elem++)
		cout << myarr[elem]<< " ";
	delete [] myarr;
	return 0;
}

int * setValue(int * arr, int length, int value) {
	arr = new int[length];
	for (int i = 0; i < length; i++)
		*(arr + i) = value;
	return arr;
}