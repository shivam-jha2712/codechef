#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int i, j;
    cin >> i >> j;
    if (i <= j)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (i - j) << endl;
    }
}
int main() // MAIN DEFINATION
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}