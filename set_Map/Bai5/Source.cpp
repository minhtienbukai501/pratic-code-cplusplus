#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

int main()
{
	
	int T;
	cin >> T;

	while (T--)
	{
		/*string s;
		getline(cin, s);
		set<char> se;

		for (int i = 0; i < s.length(); i++)
		{
			se.insert(tolower(s[i]));
		}

		if (se.size() == 26)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}*/
		string s;
		cin >> s;
		int c[26] = { 0 };

		for (char x : s)
		{
			c[(tolower(x)) - 97] = 1;
		}
 

		bool isOke = true;
		for (int i = 0; i < 25; i++)
		{
			if (c[i] == 0)
			{
				isOke = false;
				break;
			}
		}

		if (isOke == true)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}

		
	}

	return 0;
}