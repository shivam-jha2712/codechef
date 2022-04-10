#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    if (n % 4 == 3 || n % 4 == 2)
        cout << "3" << endl;
    else if (n % 4 == 1)
        cout << n << endl;
    else if (n % 4 == 0)
        cout << n + 3 << endl;
}
int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
