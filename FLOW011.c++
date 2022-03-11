#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    double Salary;
    double Gross;
    cin >> Salary;
    if (Salary < 1500)
    {
        Gross = Salary + 0.1 * Salary + 0.9 * Salary;
    }
    else
    {
        Gross = Salary + 500 + 0.98 * Salary;
    }
    cout << fixed << setprecision(6) << Gross << endl;
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