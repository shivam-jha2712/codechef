#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n < 100 && n >= 0)
    {
        printf("Easy\n");
    }
    else if (n < 200 && n >= 100)
    {
        printf("Medium\n");
    }
    else if (n <= 300 && n >= 200)
    {
        printf("Hard\n");
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