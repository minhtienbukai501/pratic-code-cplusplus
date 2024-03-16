#include<iostream>
using namespace std;

using ll = long long;

int powmod(int x, int n, int m)
{
	int res = 1;
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			res *= x;
			res %= m;
		}
			

		x *= x;
		x %= m;
		n /= 2;
	}

	return res;
}

int main()
{
	int n;
	cin >> n;
	cout << powmod(1378, n, 10);

	return 0;
}