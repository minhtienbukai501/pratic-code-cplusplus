#include<iostream>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		/*
		====== Sử dụng map======
		int n;
		cin >> n;
		map<int, bool> mp;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			mp[x]++;
		}

		int q;
		cin >> q;
		for (int i = 0; i < q; i++)
		{
			int x;
			cin >> x;
			if (mp[x] != 0)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}*/


		/*int n;
		cin >> n;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		sort(a, a + n);

		int q;
		cin >> q;
		while (q--)
		{
			int x;
			cin >> x;
			if (binary_search(a, a + n, x))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}*/

		set<int> se;
		int n;
		cin >> n;
		while (n--)
		{
			int x;
			cin >> x;
			se.insert(x);
		}

		int q;
		cin >> q;
		while (q--)
		{
			int x;
			cin >> x;
			if (se.count(x) != 0)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}

	}

	return 0;
}