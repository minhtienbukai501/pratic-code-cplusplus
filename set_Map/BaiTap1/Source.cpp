#include<iostream>
#include<set>
#include<map>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		map<int, int> mp;
		for (int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;
			mp[x]++;
		}

		cout << mp.size() << endl; 
	}

	return 0;
}