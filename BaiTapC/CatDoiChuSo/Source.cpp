#include<iostream>
using namespace std;

void check(string s)
{
	bool check = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
			check = true;
		else if (!(s[i] == '0' || s[i] == '8' || s[i] == '1' || s[i] == '9'))
		{
			cout << "INVALID";
			return;
		} 
	}
	if (check == false)
	{
		cout << "INVALID";
		return;
	}

	check = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
		{
			cout << "1";
			check = true;
		}
		else if (check == true)
		{
			cout << "0";
		}
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
		check(s);
		cout << endl;
	}

	return 0;
}