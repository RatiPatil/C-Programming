#include <stdio.h>

int main()
{
  int a[5] = {1, 2, 3, 4, 4}; // declared but not initialized

  // Print elements
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", a[i]); // contains garbage values
  }

  return 0;
}
