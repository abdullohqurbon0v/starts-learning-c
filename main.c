#include <stdio.h>

// Connect bool libreary
#include <stdbool.h>

int main()
{

  const int NUM = 0;
  char userInp;

  printf("Enter a one letter:");
  scanf("%c", &userInp);

  printf("Yout letter is %c\n", userInp);

  float x = 6.5f,
        y = 6.67f, res;

  res = y / x;
  printf("%.2f", res);

  bool isYt = true;

  // only -32768 to 32768
  short s = 32000; // 2 bytes

  // from 0 - 64 000
  // unsigned short u = 0;

  // short u = 0;

  //  from -2 mln to 2 mln
  int num = 0; // 4 bytes

  // from 0 - 4 mln
  // unsigned int i = 0;

  // from -4 mln to 4 mln
  long ln = 0;

  // from 0 - 8 mln
  // unsigned long ln = 0;

  // long long a1 = 0;

  // loong integer
  // unsigned long long a1 = 0;

  float fl = 0.2f;

  // float number
  double db = 32.32;

  // String only 1 letter
  char str = 'F';

  // printf("%d %d My number", num, s);
  return 0;
}