#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;

		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int sum = 0;
		int idx = 0;
		for (int i = 0; i < k; i++)
		{
			sum += a[i];
		}

		for (int i = k; i < n; i++)
		{
			if (sum < (sum - a[i - k] + a[i]))
			{
				sum = sum - a[i - k] + a[i];
				idx = i - k + 1;
			}
		}

		for (int i = 0; i < k; i++)
		{
			cout << a[idx + i] << " ";
		}
		cout << endl;
	}

	return 0;
}