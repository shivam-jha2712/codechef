#include <stdio.h>

int main()
{
  int n, i, j;
  int start, end;
  scanf("%d", &n);
  int a[n][4];
  int b[n];
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  int k = 0;
  for (i = 0; i < n; i++)
  {
    start = 2 * (a[i][0] + 180);
    end = a[i][1] + a[i][2];
    b[k++] = start - end;
  }

  for (i = 0; i < n; i++)
  {
    printf("%d\n", b[i]);
    }
  return 0;
}