#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
int findGCD(int, int);
void solve()
{

    int n;
    cin >> n;
    int array[n];
    cin >> array[0] >> array[1];
    int gcd = findGCD(array[0], array[1]);

    for (int i = 2; i < n; i++)
    {
        cin >> array[i];
        gcd = findGCD(gcd, array[i]);
    }

    for (int k = 0; k < n; ++k)
    {
        cout << array[k] / gcd << " ";
    }

    cout << endl;
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
int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

