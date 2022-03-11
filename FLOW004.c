#include <stdio.h>
void solve()
{
    int n, ans = 0, first = 0;
    scanf("%d", &n);
    ans = n % 10;
    while (n > 0)
    {
        first = n % 10;
        n = n / 10;
    }
    ans = ans + first;
    printf("%d\n", ans);
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        solve();
    }
    return 0;
}