#include<stdio.h>

void
ShellSort (int A[], int array_size)
{

  int gap, i, j, k, v;

  for (i = 1; i < array_size; i = 3 * i + 1)
    {
      gap=i;
    }

  printf("init : gap=%d\n", gap);

  for (; gap > 0; gap = gap / 3)
    {
      printf("loop : gap=%d\n", gap);

      for (i = gap; i < array_size; i++)
    {
      printf("inner loop : i=%d\n", gap);
      v = A[i];
      j = i;
      while (j >= gap && A[j - gap] > v)
        {
          printf("innermost loop : i=%d j=%d gap=%d \n", i,j,gap);
          A[j] = A[j - gap];
          printf("(%d.%d)", j, j - gap);
          j -= gap;

        }
      A[j] = v;
      for (k = 0; k < array_size; k++)
        printf ("%d ", A[k]);
      printf("\n");
    }
    }

  for (k = 0; k < array_size; k++)
    printf ("%d ", A[k]);

}

int main ()
{

  int i;
  int A[] = { 9, 1, 4, 3, 2, 5, 7, 6, 8 };
  int size = sizeof(A) / sizeof(int);

  ShellSort (A, size);

  return 0;

}
