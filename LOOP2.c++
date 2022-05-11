#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a > b)
        {
            cout << min(a - b, c - a + b);
        }
        else
        {
            cout << min(b - a, a + c - b);
        }
        printf("\n");
    }
    return 0;
}