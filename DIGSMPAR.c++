#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, sum = 0, m;
    // cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    if (sum % 2 != 0)
    {
        
    }
    else
    {
        n == n + 1;
        solve();
    }

    // cout << "Sum is= " << sum << endl;
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