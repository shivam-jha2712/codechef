#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int i, n, c = 0;
    char s[1000];

    gets(s);
    n = strlen(s);

    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            c++;
    }
    if (c == i)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
