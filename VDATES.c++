#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a <= c)
    {
        printf("Take second dose now\n");
    }
    else if (a < b)
    {
        printf("Too Early\n");
    }
    else if (a > c)
    {
        printf("Too Late\n");
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