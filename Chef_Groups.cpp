#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    string arr;
    cin >> arr;
    int i;
    int n = arr.length(), i = 0, count = 0;
    while (i < n)
    {
        if (arr[i] == '0')
        {
            i = i++;
        }
        else
        {
            count = count + 1;
            i++;
            while (i < n && arr[i] == '1')
            {
                i++;
            }
        }
    }
    cout << count << endl;
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