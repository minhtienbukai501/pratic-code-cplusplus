#include<iostream>
using namespace std;

using ll = long long;

ll phihameler(ll n)
{
	ll res = n;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;
			res -= (res / i);
		}
	}

	if (n != 1)
	{
		res -= (res / n);
	}

	return res;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		ll n;
		cin >> n;
		cout << phihameler(n) << endl;
	}
	


	return 0;
}