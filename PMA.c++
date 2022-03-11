#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    int a[n], sum1 = 0, sum2 = 0, sum3 = sum1 + (-1) * sum2;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum1 += abs(a[i]);
        }
        else
        {
            sum2 -= abs(sum1);
        }
    }

    cout << sum3 << endl;
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