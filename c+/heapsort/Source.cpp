#include<iostream>
#include<vector>
using namespace std;


void heapstify(int a[], int n, int i) {
	int maxindex = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && a[maxindex] < a[l]) {
		maxindex = l;
	}

	if (r < n && a[maxindex] < a[r]) {
		maxindex = r;
	}

	if (maxindex != i) {
		swap(a[i], a[maxindex]);
		heapstify(a, n, maxindex);
	}
}

void heap(int a[], int n) {
	// xây dựng được max heap
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapstify(a, n, i);
	}
	// 
	for (int i = n - 1; i >= 0; i--) {
		swap(a[i], a[0]);
		heapstify(a, i, 0);
	}



}

int main() {
	int n;
	cin >> n;
	int a[1000];

	srand(time(0));
	for (int i = 0; i < n; i++) {
		a[i] = 0 + rand() % 450;
	}
	heap(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




	return 0;
}