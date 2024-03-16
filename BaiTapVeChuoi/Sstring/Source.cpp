#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int cntHoa = 0;
		int cntThuong = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				cntThuong++;
			else
				cntHoa++;
		}

		if (cntHoa > cntThuong)
		{
			for (int i = 0; i < s.length(); i++)
			{
				s[i] = toupper(s[i]);
			}
		}
		else
		{
			for (int i = 0; i < s.length(); i++)
			{
				s[i] = tolower(s[i]);
			}
		}
		

		cout << s << endl;
	}





	return 0;
}