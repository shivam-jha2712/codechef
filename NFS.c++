#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int u, v, a, s;
    cin >> u >> v >> a >> s;
    if ((u * u) - 2 * (a * s) <= v * v)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
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