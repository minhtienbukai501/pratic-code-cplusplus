#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;

		int a[1001];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int max = INT_MIN;
		int res = a[0];
		for (int j = 1; j < n; j++)
		{
			if (a[j] < a[j - 1])
			{
				res = a[j];
			}
			else
			{
				if (max < (a[j] - res))
				{
					max = a[j] - res;
				}
			}
		}

		if (max == INT_MIN)
		{
			cout << "-1";
		}
		else
		{
			cout << max;
		}
		cout  << endl;
	}

	return 0;
}