#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        cout << "Draw" << endl;
    }
    else if (b < a && b < c)
    {
        cout << "Bob" << endl;
    }
    else if (c < a && c < b)
    {
        cout << "Alice" << endl;
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