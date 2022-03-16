#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string temp = s;
    sort(s.begin(), s.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] != s[i])
        {
            char c = temp[i];
            temp[i] = temp[n - 1 - i];
            temp[n - 1 - i] = c;
        }
    }
    if (s == temp)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    // cout << s << endl;
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