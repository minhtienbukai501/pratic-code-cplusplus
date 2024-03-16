#include<iostream>
using namespace std;

int powmod(int a, int n, int m)
{
	int res = 1;
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		n /= 2;
	}

	return res;
}

int main()
{
	int  T;
	cin >> T;
	while (T--)
	{
		int a, n, m;
		cin >> a >> n >> m;

		cout << powmod(a, n, m) << "\n";
	}
	
	return 0;
}