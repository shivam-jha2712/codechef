#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, i, j = 0, c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            c++;
        }
        else if (j == 0)
        {
            swap(arr[i], arr[i + 1]);
            j = 1;
        }
    }
    c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            c++;
        }
    }
    if (c == n - 1)
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