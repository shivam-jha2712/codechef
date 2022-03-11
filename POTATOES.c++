#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int x, y;
    cin >> x >> y;
    int given_sum = x + y;
    for (int curr_num = 0;; curr_num++)
    {
        if (isPrime(curr_num))
        {
            cout << curr_num - given_sum << endl;
            return;
        }
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