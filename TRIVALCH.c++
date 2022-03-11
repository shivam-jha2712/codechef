#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{

    int a, b, c;

    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b)
    {

        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}