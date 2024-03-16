#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    int a, b;
    
    cin >> a >> b;

    if (a > b) {
        cout << "\nXin kiem tra lai!";
    }
    else // a <= b;
    {
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
    }
    

    return 0;
}