#include<iostream>
#include<istream>
#include<fstream>
using namespace std;

struct SinhVien {
	string maSv;
	string TenSV;
};

int main() {
	ifstream fileIn("input.txt", ios::in);
	int n;

	if (!fileIn) {
		cout << "\nFile chua ton tai!";
		return 0;
	}
	
	return 0;
}