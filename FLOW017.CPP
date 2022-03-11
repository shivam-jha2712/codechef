#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a < b & b < c) || (c < b && b < a))
    {
        cout << b << endl;
    }
    else if ((a < c && c < b) || (b < c && c < a))
    {
        cout << c << endl;
    }
    else if ((b < a && a < c) || (c < a && a < b))
    {
        cout << a << endl;
    }
}
int main() // MAIN DEFINATION
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }

    return 0;
}
