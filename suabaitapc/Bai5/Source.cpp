#include<iostream>
using namespace std;

int dem[1000001] = { 0 };

int main() {
	int a[1000];
	int n;
	cin >> n;
	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dem[a[i]]++;
		if (dem[a[i]] > max) {
			max = dem[a[i]];
		}
	}

	for (int i = 0; i < 1000001; i++) {
		if (dem[i] == max) {
			cout << i << " " << max;
			break;
		}
	}

	return 0;
}