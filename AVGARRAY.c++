#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int l = n / 2;
        if (n & 1)
        {
            for (int i = m - l; i < m + l + 1; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = m - l; i < m + l + 1; i++)
            {
                if (i != m)
                {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
    }
}