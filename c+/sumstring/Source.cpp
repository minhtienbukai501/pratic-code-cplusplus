#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;



int main() {
	int n, m; cin >> n >> m;
	int**a = new int*[n];
	for (int i = 1; i <= m; i++) {
		a[i] = new int[m];
	}


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}