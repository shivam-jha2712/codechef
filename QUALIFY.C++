#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (b * 1 + c * 2 >= a)
    {
        cout << "Qualify" << endl;
    }

    else
    {
        cout << " Not Qualify" << endl;
    }
}
int main() // MAIN DEFINATION
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        solve();
    }
    return 0;
}