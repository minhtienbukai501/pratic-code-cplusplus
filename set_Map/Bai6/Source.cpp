#include<iostream>
#include<string>
#include<set>
#include<sstream>
#include<map>
using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;

		map<string, int> mp;
		while (ss >> word)
		{
			mp[word]++;
		}
		
		int res = -1;
		string wordmax;
		for (auto it : mp)
		{
			if (it.second > res)
			{
				res = it.second;
				wordmax = it.first;
			}
		}

		cout << wordmax << endl;
	}


	return 0;
}