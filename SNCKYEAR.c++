#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int i;
    cin >> i;
    if (i == 2010 | i == 2015 | i == 2016 | i == 2017 | i == 2019)
    {
        printf("HOSTED\n");
    }
    else
    {
        printf("NOT HOSTED\n");
    }
}
int main() // MAIN DEFINATION
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}