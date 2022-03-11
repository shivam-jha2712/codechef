#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{
    int a, b, c;
    scanf("%d/n", &a);
    scanf("%d/n", &b);
    scanf("%d/n", &c);
    if (a >= b && a >= c)
    {
        if (b >= c && b >= c)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    else if (a >= b)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", b);
    }

    return 0;
}