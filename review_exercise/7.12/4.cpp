#include <iostream>

void setValue(int *, int *, int);

int main(){
	using namespace std;
	const int length = 10;
	int myarr[length] = {0};
	int begin, end;
	int value;
	cout << "please enter the interval!" << "( from 1 to " << length << " )" << endl;
	cout << "begin: ";
	cin >> begin;
	cout << "end: ";
	cin >> end;
	cout << "value ?";
	cin >> value;
	setValue(myarr+begin, myarr+end, value);
	cout << "new array is:"<<endl;
	for (int elem : myarr)
		cout << elem << " ";
}

void setValue(int * begin, int * end, int value){
	int * pt;
	for (pt = begin-1; pt != end ; pt ++)
		*pt = value;
}
 // 1. cin 给一个指针，不能cin给一个指针的解引用。
 // 2. 而且必须给这个指针指的内容分配空间