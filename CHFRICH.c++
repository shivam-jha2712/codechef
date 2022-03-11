#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);
    res = (b - a) / c;
    printf("%d\n", res);
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