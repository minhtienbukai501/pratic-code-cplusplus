#include<iostream>
#include<set>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n; cin >> n;
		set<int> se;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			se.insert(x);
		}

		for (int i = 0; i < n; i++)
		{
			if (se.count(i) != 0)
				cout << i << " ";
			else
				cout << "-1 ";
		}
	}


	return 0;
}