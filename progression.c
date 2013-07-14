#include <stdio.h>
int main() {
  int a,b,c,d,num;
  printf ("Enter a number : ");
  scanf("%4d", &num);
  a = num / 1000;
  b = num / 100 % 10;
  c = num /10 % 10;
  d = num % 10;
  if (d - c == c - b == b - a)
    printf ("It is Arithmetic progression\n");
  else 
    printf ("It's not Arithmetic progression\n");
  return 0;
}
