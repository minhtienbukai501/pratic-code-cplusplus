#include<iostream>
using namespace std;

using ll = long long;
ll pow2(int a, int b)
{
	ll res = 1;
	while (b != 0)
	{
		if (b % 2 == 1)
			res *= a;

		a *= a;
		b /= 2;
	}
	return res;
}


int main()
{


	return 0;
}