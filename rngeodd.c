#include <stdio.h>

int main()
{
    int start, end, count;

    scanf("%d %d", &start, &end);

    for ( count = start; count <= end; count++)
    {
        if (count % 2 != 0)
        {
            printf("%d ", count);
        }
        
    }
     
    return 0;
}