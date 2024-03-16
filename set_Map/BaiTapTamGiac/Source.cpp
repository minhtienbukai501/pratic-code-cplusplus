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
		int m, n;
		cin >> m >> n;

		set<int> se;
		while (m--)
		{
			int x;
			cin >> x;
			se.insert(x);
		}


		set<int >se2;

		while (n--)
		{
			int x;
			cin >> x;
			se2.insert(x);
		}


		for (int x : se)
		{
			if (se2.find(x) == se2.end())
			{
				cout << x << " ";
			}
		}
		

		

		
		
	}
	

	return 0;
}