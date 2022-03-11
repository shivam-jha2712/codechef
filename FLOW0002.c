#include <stdio.h>
void solve()
{
    int i, j;
    scanf("%d %d", &i, &j);
    printf("%d\n", i % j);
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