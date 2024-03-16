#include<iostream>
using namespace std;

int TimViTriDauTienCuaX(int* a, int l, int r, int X)
{
	int  vt = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == X)
		{
			vt = m;
			r = m - 1;
		}

		if(X > a[m])
		{
			l = m + 1;
		}
		else 
		{
			r = m - 1;
		}
	}

	return vt;
}

int main()
{
	int* a;
	int n;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int vt = TimViTriDauTienCuaX(a, 0, n - 1, 3);
	cout << vt;


	return 0;
}