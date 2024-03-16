#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;




int main() {
	int n;
	cin >> n;

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << 0 << " ";
		}
		else
		{
			int vt = 0;
			for (int j = i - 1; j >= 0; j--) {
				if (a[i] > a[j]) {
					vt = j + 1;
					break;
				}
			}
			cout << vt << " ";
		}
	}


	return 0;
}