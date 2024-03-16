#include<iostream>
using namespace std;

void solve(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
		{
			s[i] = 'x';
			s[i + 1] = 'x';
			s[i + 2] = 'x';
		}
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'x')
			continue;
		cout << s[i];
	}
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		solve(s);
		cout << endl;
	}
	
	return 0;
}