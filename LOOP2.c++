#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, d;
        scanf("%d %d %d", &a, &b, &d);
        if (a > b)
        {
            cout << min(a - b, d - a + b);
        }
        else
        {
            cout << min(b - a, a + d - b);
        }
        printf("\n");
    }
    return 0;
}