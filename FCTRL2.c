#include <stdio.h>
void solve()
{
    int n, ans = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        ans = ans + n * (n - 1);
    }
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