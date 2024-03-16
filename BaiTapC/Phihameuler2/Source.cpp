#include<iostream>
using namespace std;

int p[1000001];

void sieve()
{
	for (int i = 0; i < 1000001; i++)
	{
		p[i] = i;
	}

	for (int i = 2; i < 1000001; i++)
	{
		if (p[i] == i)
		{
			p[i] = i - 1;
			for (int j = 2 * i; j < 1000001; j+= i)
			{
				p[j] -= p[j] / i;
			}
		}
	}
}

int main()
{
	sieve();
	int T;
	cin >> T;
	
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << p[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}