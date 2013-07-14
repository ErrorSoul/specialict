#include <stdio.h>
int main()
{
  int a,b,c;
  printf ("Enter 3 numbers : ");
  scanf("%d %d %d",&a,&b,&c);
  printf("maximum number = %d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));
  return 0;
}
