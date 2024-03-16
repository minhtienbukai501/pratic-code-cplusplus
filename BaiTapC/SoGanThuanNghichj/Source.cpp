#include<iostream>
using namespace std;

bool soGanThuanNghich(string s)
{
	int sodau = s[0] - '0';
	int socuoi = s[s.length() - 1] - '0';
	if (!((sodau == 2 * socuoi) || (socuoi == 2 * sodau)))
		return false;

	for (int i = 1; i <= ((s.length() - 1 + 1) /2); i++)
	{
		if (s[i] != s[s.length() - 1 - i])
		{
			return false;
		}
	}

	return true;
}

int sochuso(long long n)
{
	int dem = 0;
	while (n != 0)
	{
		dem++;
		n /= 10;
	}

	return dem;
}

bool CheckThuanNghich(long long n)
{
	long long d = 0;
	long long temp = n;
	while (n != 0)
	{
		d = d * 10 + n % 10;
		n /= 10;
	}
	
	return temp == d;
}

bool solve(long long n)
{
	int d, c;

	long long x = (long long)(pow(10, sochuso(n) - 1));
	d = n / x;
	c = n % 10;
	n = n % x;
	n /= 10;

	if (!(d == 2 * c || c == 2 * d))
		return false;
	
	return CheckThuanNghich(n);
}
int main()
{
	
	long long T;
	cin >> T;
	while (T--)
	{
		long long n;
		cin >> n;
		if (solve(n))
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}



	return 0;
}