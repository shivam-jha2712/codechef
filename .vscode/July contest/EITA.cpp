#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int d, x, y, z, work1, work2;
    cin >> d >> x >> y >> z;
    work1 = (x * 7);
    work2 = ((y * d) + ((7 - d) * z));
    if (work1 > work2)
    {
        cout << work1 << endl;
    }
    else
    {
        cout << work2 << endl;
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