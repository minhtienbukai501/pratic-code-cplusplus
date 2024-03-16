#include<iostream>
using namespace std;

using ll = long long;

ll tinhMod(int n, int k)
{
	ll sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (i % k);
	}

	return sum;
}


ll sumMod(int n, int k)
{
	int sum = 0;

	for (int i = 1; i <= k; i++)
	{
		sum += i % k;
	}
	int n2 = (n / k) * k;
	sum *= (n / k);
	for (int i = n2 + 1; i <= n; i++)
	{
		sum += i % k;
	}

	return sum;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;

		cout << tinhMod(n, k) << endl;
		cout << sumMod(n, k) << endl;
	}


	return 0;
}