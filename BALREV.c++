#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
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