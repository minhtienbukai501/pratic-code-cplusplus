#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
#include<windows.h>
using namespace std;

// sort 
// stable_sort

bool cmp(int a, int b) {
	return a < b;
}
int main() {
	int n;
	cin >> n;
	vector<int> a(n);

	srand(time(0));
	for (int i = 0; i < n; i++) {
		a[i] = 0 + rand() % 450;
	}

	//	sort(a, a + n , greater<int>()); // them greater<int>() neu sap xep giam
	//	for (int i = 0; i < n; i++){
	//		cout  << a[i] << " ";
	//	}
	// statble_sort : khong thay doi vi tri trong mang
	sort(a.begin(),a.end(), cmp);
	for (int x : a)cout << x << " ";
	


	return 0;
}