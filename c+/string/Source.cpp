#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void solve() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> ve;
	while (ss >> word) {
		ve.push_back(word);
	}

	for (int i = ve.size() - 1; i >= 0; i--) {
		cout << ve[i];
		if (i != 0) {
			cout << " ";
		}
	}

	cout << endl;
}


bool isKyTu(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {	
		solve();
	}


	return 0;
}