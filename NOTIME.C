#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
int main() // MAIN DEFINATION
{
    int n, h, x, i;
    cin >> n >> h >> x;
    int f = 0;
    for (i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (x + z >= h)
        {
            f = 1;
        }
    }
    if (f == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    

    return 0;
}