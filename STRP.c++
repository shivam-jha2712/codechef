#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            count = count + 1;
            i++;
        }
        else
        {
            count = count + 1;
        }
    }
    cout << count << endl;
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