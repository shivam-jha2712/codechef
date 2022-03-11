#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
int main() // MAIN DEFINATION
{
    int L, B, peri, area;
    cin >> L;
    cin >> B;
    peri = 2 * (L + B);
    area = (L * B);
    if (area > peri)
    {
        printf("Area\n");
        printf("%d", area);
    }
    else if (peri > area)
    {
        printf("Peri\n");
        printf("%d", peri);
    }
    else if (peri = area)
    {
        printf("Eq\n");
        printf("%d", area);
    }

    return 0;
}