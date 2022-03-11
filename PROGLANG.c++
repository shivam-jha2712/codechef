#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int x, y, a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    if ((x == a && y == b) || (x == b && y == a))
    {
        printf("1\n");
    }
    else if ((x == c && y == d) || (x == d && y == c))
    {
        printf("2\n");
    }
    else
    {
        printf("0\n");
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