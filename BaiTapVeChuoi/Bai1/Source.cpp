#include <iostream>
#include<iomanip>
using namespace std;

using ll = long long;



int main()
{   
    int x, y, z, n;
    cin >> x >> y >> z >> n;


    int start = pow(10, n - 1);
    int end = pow(10, n ) - 1;

    bool check = false;
    for (int i = start; i <= end; i++)
    {
        if ((i % x == 0) && (i % y == 0) && (i % z == 0) && (i % n == 0))
        {
            cout << i;
            check = true;
            break;
        }
    }
    if (check == false)
        cout << "-1";
    return 0;
}