#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int Q, P;
    cin >> Q >> P;
    double Result = (Q * P);
    if (Q > 1000)
    {
        Result -= (Result * 0.1);
    }

    cout << fixed << setprecision(10) << Result << endl;
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