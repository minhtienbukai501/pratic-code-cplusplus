#include<iostream>
#include<set>
#include<map>
#include<sstream>
#include<string>
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

		set<string> se;
		while (ss >> word)
		{
			if (se.find(word) != se.end())
			{
				cout << word << "\n";
				break;
			}

			se.insert(word);
		}


	}

	return 0;
}