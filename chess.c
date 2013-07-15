#include <stdio.h>

int main(){
  int  c = 0;
  int i;
  printf(" ________\n");
  while( c < 8){
    if (c%2==0){
      printf("|");
      for (i = 0 ;i< 4;i++)
	printf(" *");
      printf("|");
      printf("\n");
    }
    else{
      printf("|");
      for (i = 0; i < 4; i++)
	printf("* ");
      printf("|");
    
      printf("\n");
    }
    
    c++;
  }printf(" ________\n");
}
