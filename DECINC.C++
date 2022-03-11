#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;
    if (0 <= n <= 1000)
    {

        if (n % 4 == 0)
        {
            cout << n + 1;
        }
        else
        {
            cout << n - 1;
        }
    }
    return 0;
}