#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, x, i;
    scanf("%d %d", &n, &x);
    // scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int m, housedestroy = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            housedestroy = i + 1;
            m = max(a[i], a[i + 1]);
        }
    }
    if (m < housedestroy)
    {
        cout << m << endl;
    }
    cout << housedestroy << endl;
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
