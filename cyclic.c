#include <stdio.h>

int main()
{

  int n, i, j;
  scanf("%d", &n);
  int a[n][4];
  int b[n];
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < 4; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  int k = 0;
  for (i = 0; i < n; i++)
  {
    if ((a[i][0] + a[i][2] == 180 || (a[i][1] + a[i][3] == 180)))
    {
      b[k++] = 1;
    }
    else
    {
      b[k++] = 0;
    }
  }

  for (i = 0; i < n; i++)
  {
    if (b[i] == 1)
    {
      printf("yes\n");
    }

    else
    {
      printf("no\n");
    }
  }

  return 0;
}
