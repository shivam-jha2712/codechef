#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    long long int n, x;
    long long int ans = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        long long int s, im;
        cin >> s >> im;
        if (s <= x && ans < im)
        {
            ans = im;
        }
    }
    cout << ans << endl;
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