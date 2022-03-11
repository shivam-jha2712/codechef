#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int N, A, sqroot;
    cin >> N >> A;
    if (1 <= N <= 100000 && 1 <= A <= 10000)
    {
        /* code */
        sqroot = sqrt(N);
        cout << fixed << setprecision(0) << sqroot * A << endl;
    }
}
int main() // MAIN DEFINATION
{
    int t;

    cin >> t;
    if (1 <= t <= 100)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}