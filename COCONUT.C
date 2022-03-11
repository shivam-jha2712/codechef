#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int xa, xb, Xa, Xb, ans;
    cin >> xa >> xb >> Xa >> Xb;
    ans = Xa / xa + Xb / xb;
    cout << ans << endl;
}
int main() // MAIN DEFINATION
{
    int t;
    // int n;
    // scanf(" Enter the Number : %d",&n);
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }

    return 0;
}

// First problem of Codechefsolved by me