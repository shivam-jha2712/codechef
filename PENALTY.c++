#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int a[10], t_1 = 0, t_2 = 0, i;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    if (i % 2 != 0)
    {
        t_1++;
    }
    else if (i % 2 == 0)
    {
        t_2++;
    }
    if (t_1 > t_2)
    {
        printf("1");
    }
    else if (t_1 < t_2)
    {
        printf("2");
    }
    else if (t_1 = t_2)
    {
        printf("0");
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