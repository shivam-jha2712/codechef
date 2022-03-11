#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << endl;
        cout << a + b << endl;
    }
    else
    {
        cout << b << endl;
        cout << a + b << endl;
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