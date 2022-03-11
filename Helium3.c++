#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    if (X * Y >= A * B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
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