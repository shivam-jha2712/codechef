#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (b >= n && n <= a + c)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
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