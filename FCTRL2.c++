#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, m = 1, i;
    cin >> n;

    if (1 <= n <= 100)
    {

        for (i = 1; i <= n; i++)
        {
            m = m * i;
        }
        cout << m << endl;
    }
}
int main() // MAIN DEFINATION
{
    int t;
    cin >> t;

    if (1 <= t <= 100)
    {

        while (t--)
        {
            solve();
        }
    }

    return 0;
}