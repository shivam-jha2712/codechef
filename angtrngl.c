#include <stdio.h>

void solve()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c > 180)
    {
        printf("NO\n");
    }
    else if (a + b + c < 180)
    {
        printf("NO\n");
    }
    else if (a + b + c == 180)
    {
        printf("YES\n");
    }
}
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}