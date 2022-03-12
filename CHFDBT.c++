#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, day = 0;
    scanf("%d", &n);
    // day = (n + 1) / 2;
    if (n & 1)
    {
        cout << n - n / 2 << endl;
    }
    else
    {
        cout << n / 2 << endl;
    }
    // day = n % 2;
    // if (n % 2 == 0)
    // {
    //     printf("%d\n", n / 2);
    // }
    // else if (n % 2 != 0)
    // {
    //     printf("%d\n", (n % 2) + 2 * day);
    // }
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