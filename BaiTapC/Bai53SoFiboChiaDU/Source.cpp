#include<iostream>
using namespace std;

using ll = long long;

int fibo(int n, int m)
{
	int sum = 0;
	if (n >= 1)
		sum += 1;

	int f0 = 0, f1 = 1;
	int fn;
	for (int i = 2; i < n; i++)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		f0 %= m;
		f1 %= m;
		sum += fn;
	}
	return sum %= m;
}


int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		cout << fibo(n,100000 ) << endl;
	}


	return 0;
}