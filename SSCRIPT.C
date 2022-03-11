#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;

    int i,j;
    vector<int> term(n);
    int maxi = 0;

    for (i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            if (a[i] == '*')
            {
                term[i] = 1;
            }

            else
            {
                term[i] = 0;
            }
        }
        else if (a[i] == '*')
        {
            term[i] = 1 + term[i + 1];
        }
        else
        {
            term[i] = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        maxi = max(maxi, term[i]);
    }

    if (maxi >= k)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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