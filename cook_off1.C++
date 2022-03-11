#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int x, a, b, c;
    scanf("%d %d %d %d", &x, &a, &b, &c);
    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            printf("%d\n", ((x - 1) * a) + b);
        }
        else
        {
            printf("%d\n", ((x - 1) * a) + c);
        }
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
            printf("%d\n", ((x - 1) * b) + a);
        }
        else
        {
            printf("%d\n", ((x - 1) * b) + c);
        }
    }
    else if (c <= a && c <= b)
    {
        if (b <= a)
        {
            printf("%d\n", ((x - 1) * c) + b);
        }
        else
        {
            printf("%d\n", ((x - 1) * c) + a);
        }
    }
}
int main() // MAIN DEFINATION
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        solve();
    }
    return 0;
}