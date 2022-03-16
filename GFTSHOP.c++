#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int sum = 0;
    int temp = -1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + a[i] >= k)
        {
            temp = i;
            break;
        }
        sum += a[i];
        count++;
    }
    if (temp == -1)
    {
        printf("%d\n", n);
    }
    else
    {
        if (a[temp] % 2 == 0)
        {
            if ((a[temp] / 2 + sum) <= k)
            {
                count++;
            }
        }
        else
        {

            if ((a[temp] / 2 + sum + 1) <= k)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}

int main() // MAIN DEFINATION
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}