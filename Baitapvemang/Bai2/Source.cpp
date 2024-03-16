#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}


		sort(a, a + n);
		int res = INT_MAX;

		for (int i = 1; i < n; i++)
		{
			if (a[i] != a[i - 1])
			{
				res = min(res, abs(a[i] - a[i - 1]));
			
			}
		}

		cout << res << endl;

	}


	return 0;
}