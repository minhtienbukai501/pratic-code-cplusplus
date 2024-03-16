#include<iostream>
using namespace std;

int p[1000001];

void sieve()
{
	for (int i = 1; i <= 1000000; i++)
	{
		p[i] = i;
	}

	for (int i = 1; i <= 1000000; i++)
	{
		if (p[i] = i)
		{
			p[i] = i - 1;
			for (int j = 2 * i; j <= 100000; j++)
			{
				p[j] -= p[j] / i;
			}
		}
	}
	

}

int main()
{
	sieve();

	
	return 0;
}