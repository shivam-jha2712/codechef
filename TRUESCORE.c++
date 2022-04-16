#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (c < a && b < d)
    {
        printf("IMPOSSIBLE\n");
    }
    else
    {
        printf("POSSIBLE\n");
    }
}

int main()
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
