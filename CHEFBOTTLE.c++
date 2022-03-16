#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int c, x, y, result;
    scanf("%d %d %d", &c, &x, &y);
    result = y / x;
    if (result > c)
    {
        printf("%d\n", c);
    }
    else
    {
        printf("%d\n", result);
    }

    // if (x > y)
    // {
    //     printf("0\n");
    // }
    // else if (x < y && x != 1)
    // {
    //     printf("%d\n", y / x);
    // }
    // else if (x = 1 && x < y)
    // {
    //     printf("%d\n", c);
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