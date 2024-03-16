#include<iostream>
#include<algorithm>
using namespace std;
int cnt[1000001];

int main()
{

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < 1000001; i++)
		{
			cnt[i] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			cnt[x]++;
		}

		int Tong = 0;
		for (int i = 0; i < 1000001; i++)
		{
			if (cnt[i] > 1)
				Tong += cnt[i];
		}

		cout << Tong << endl;

	}


	return 0;
}