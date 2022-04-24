#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, priyanka = 0, shivam = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            priyanka++;
        }
        else
        {
            shivam++;
        }
    }
    if (abs(priyanka - shivam) < 2)
    {
        cout << "YES" << endl;
    }
    else if (abs(priyanka - shivam) == 2)
    {
        if (priyanka % 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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