#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, day = 0;
    scanf("%d", &n);
    day = day + (n / 7);
    if (n % 7 == 6)
    {
        day++;
    }
    printf("%d\n", day);
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