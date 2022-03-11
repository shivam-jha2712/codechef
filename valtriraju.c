#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 0 && n % 6 == 0 || n % 5 == 0 || n % 6 == 0)
    {
        printf("Yes\n");
    }
    // else if (n % 5 == 0 || n % 6 == 0)
    // {
    //     printf("Yes");
    // }
    // else if (n % 5 != 0 && n % 6 != 0)
    // {
    //     printf("No");
    // }
    // else if (n % 5 != 0 || n % 6 != 0)
    // {
    //     printf("No");
    // }
    else
    {
        printf("No\n");
    }
    return 0;
}