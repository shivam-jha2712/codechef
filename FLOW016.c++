#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int a, b, gcd, lcm;
    cin >> a >> b;
    if (b > a) // This is just to swap the digits if in case second number is bigger than the first digit
    {
        int temp = b;
        b = a;
        a = temp;
    }

    for (int i = 1; i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0) // The logic for GCD is to find the smallest number that divides both the numbers perfectly
        {
            gcd = i;
        }
    }
    lcm = (a * b) / gcd; // And that for LCM is that the product of both numbers by gcd is LCM
    cout << gcd << " " << lcm << endl;
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