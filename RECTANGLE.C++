#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d && d == a)
    {
        cout << "YES" << endl;
    }
    else if (a == c && b == d)
    {
        cout << "YES" << endl;
    }
    else if (b == c && a == d)
    {
        cout << "YES" << endl;
    }
    else if (a == b && c == d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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