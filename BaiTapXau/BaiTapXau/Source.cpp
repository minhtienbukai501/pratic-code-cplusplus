#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[1000];


	cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
	for (int i = 1; i < n -1 ; i++)
	{
		cout << min(a[i] - a[i - 1], a[i + 1] - a[i]) << " " << max(a[i] - a[0], a[n - 1] - a[i]) << endl;
	}

	cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0];


	return 0;
}