#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string s = "   le    mINH    tIEN   ";
    int vt = 0;
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 32;
        vt = 1;
    }

    for (int i = vt; i < s.length(); i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] -= 32;
            i += 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }

    }

    cout << s;

    return 0;
}