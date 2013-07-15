#include <stdio.h>
int main () 
{
  int num,i,g;
  int sum = 0;
  int j = 1;
  
  printf ("Vvedite celoe chislo (max = 2147483647) : ");
  if (scanf("%d", &num) == 1 && num < 2147483647){
    printf ("inverse number = ");
   
    for (i=1;i< 11; i++){
      g = (num/j)%10 ;
      if (g != 0){
	printf("%d",g);
      
	sum += g;
      
	j *= 10;
      }
      
      
    }
    printf("\n");
    printf("Summa = %d\n",sum);
    
  }
  else 
    printf ("nepravilnoe chislo \n");
}
