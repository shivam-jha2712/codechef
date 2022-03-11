#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
int main() // MAIN DEFINATION
{
    int n;
    cin >> n;
    if (n % 2 == 0 && n >= 2 && n <= 100)
    {
        cout << (n * n) / 2 << endl;
    }

    return 0;
}