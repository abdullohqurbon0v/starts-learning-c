#include <stdio.h>

int main()
{
  // empty array must have a 5 elements !!
  int arr[] = {4, 23, 2, 4, 3};
  arr[0] = 5;

  printf("%d\n", arr[3]);

  float flArr[3];
  flArr[0] = 32.3f;
  flArr[1] = 335.3f;
  flArr[2] = 32.3f;

  char word[] = {'S', 'o', 'm', 'e'};
  char lng[] = "Hello World";

  printf("%s\n", lng);

  // Create matrix
  int matrix[2][3] = {
      {12, 32, 23}, {32, 32, 32, 32}};

  return 0;
}