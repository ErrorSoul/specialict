#include <stdio.h>


int main()
{
  int a,b,i;
  
  unsigned int n = 0x80000000 ;
  
  
  printf("%d \n", n);
  printf("Please, input number : ");
  scanf ("%d", &a);
  
  b = sizeof(int)<< 3;
  for (i = 0; i < 32; i++ ){
    
    printf("%d",a/n%2);
    
    n >>= 1;
  }
  printf("\n"); 
}
