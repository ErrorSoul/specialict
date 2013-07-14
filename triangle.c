#include <stdio.h>

int main()
{
  int h,i,k;
  
  printf("Enter triangle's h : ");
  scanf("%d", &h);
  for ( i = 0;i< h;++i){
    for (k = 0; k <= i; k++){
      printf("*");}
    printf("\n");
  }
}
