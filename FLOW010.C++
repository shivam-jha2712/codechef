#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    char c;
    cin >> c;
    if (c == 'B' || c == 'b')
    {
        cout << "BattleShip" << endl;
    }
    else if (c == 'C' || c == 'c')
    {
        cout << "Cruiser" << endl;
    }
    else if (c == 'D' || c == 'd')
    {
        cout << "Destroyer" << endl;
    }
    else if (c == 'F' || c == 'f')
    {
        cout << "Frigate" << endl;
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