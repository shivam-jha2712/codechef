#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] >= 10 && a[j] <= 60)
        {
            count++;
            continue;
        }
    }
    cout << count << endl;
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