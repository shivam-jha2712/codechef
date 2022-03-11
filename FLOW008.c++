#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n < 10)
    {
        cout << "Thanks for helping Chef!" << endl;
    }
    else
    {
        cout << "-1" << endl;
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
