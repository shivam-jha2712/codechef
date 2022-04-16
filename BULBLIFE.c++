#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int arr[a], sum = 0, result;
    for (int i = 0; i < a - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a - 1; i++)
    {
        sum += arr[i];
    }
    result = (a * b) - (sum);
    if (result < 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", result);
    }
}

int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
