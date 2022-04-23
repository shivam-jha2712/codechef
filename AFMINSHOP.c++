#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b = arr[0];
    for (int i = 1; i < n; i++)
    {
        b = min(b, arr[i]);
    }
    long long answer = k / b + (k % b != 0);
    cout << max(n, answer) << endl;
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