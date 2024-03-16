#include <iostream>
#include<string>
#include <chrono>
#include <thread>
using namespace std;







int main() {
   
    int n;
    cin >> n;
    int sum = 0;
    int i;
    for (i = 1; i <= n; i = i + 1)
    {
        sum = sum + i * i;
    }
    
    cout << sum;


    return 0;
}