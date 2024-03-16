#include<iostream>
using namespace std;

int main() {
	int a = 5;
	int* b = &a;
	cout << "\nb = " << b;
	cout << "\na = " << &a;
	

	return 0;
}