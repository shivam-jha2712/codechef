#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int n;
    int a[14];
    scanf("%d", &n);
    for (int i = 0; i < 14; i++)
    {
        cin >> a[i];
    }
    char c = 'a';
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == c)
            count++;
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