#include<iostream>
using namespace std;

int f[20];
int a[2000];

void khoitao()
{
	memset(a, 0, sizeof(a));
	f[0] = 0, f[1] = 1;
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < 20; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		a[f[i]] = 1;
	}
}

int main()
{

	khoitao();

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (a[x] == 1)
			{
				cout << x << " ";
			}
		}
		cout << endl;
	}
	
	

	return 0;
}