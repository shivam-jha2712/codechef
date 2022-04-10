#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a == 1 || b == 1)
    {
        cout << -1 << endl;
    }
    else if (__gcd(a, b) == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main() // MAIN DEFINATION
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }

    return 0;
}
