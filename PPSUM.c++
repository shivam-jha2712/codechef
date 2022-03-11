#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    long long sum = b; // Taking up the sum one after the other
    while (a--)
    {
        sum = (sum * (sum + 1)) / 2;
    }
    cout << sum << endl;
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