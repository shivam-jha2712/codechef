#include <stdio.h>

int main()
{
    int n, result;
    scanf("%d", &n);
    result = n / 3;
    if (n % 3 != 0)
    {
        printf("-1\n");
    }
    else if (result % 2 == 0)
    {
        printf("0\n");
    }
    else if (result % 2 == 1)
    {
        printf("1\n");
    }

    return 0;
}
