#include<iostream>
#include<sstream>
#include<string>
#include<cmath>
#include<vector>
#include<set>
using namespace std;


int c[26] = { 0 };

int main() {
	int t;
	cin >> t;
	set<int> se;

	while (t--) {
		string s;
		int k;
		cin >> s >> k;
		for (int i = 0; i < s.length(); i++) {
			se.insert(s[i]);
		}

		if (se.size() < k) {
			cout << "0\n";
		}
		else cout << "1\n";
	}




	return 0;
}