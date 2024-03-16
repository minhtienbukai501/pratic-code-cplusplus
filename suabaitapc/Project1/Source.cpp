#include<iostream>
using namespace std;

int chuoiSangSo(string s) {

	int so = 0;
	for (int i = 0; i < s.length(); i++) {
		so = so * 10 + (s[i] - '0');
	}

	return so;
}

int main() {
	int t; cin >> t;

	while (t--) {
		string s;
		cin >> s;

		int sum = 0;
		string so = "";
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				so += s[i];
			}
			else
			{
				sum += chuoiSangSo(so);
				so = "";
			}
		}

		sum += chuoiSangSo(so);
		cout << sum << endl;
	}
	


	return 0;
}