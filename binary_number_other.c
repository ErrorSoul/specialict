#include <stdio.h>


int main()
{
  int a;
  int b = sizeof(int)*8-1;
  unsigned int c = 1<<b;
  printf("Please,input number : ");
  scanf("%d", &a);
  while (c){
    printf("%d", (a & c)>>b);
    b--;
    c>>=1;
  }
  
  
  printf("\n");  
 
  return 0;
}
