#include <stdio.h>

int main() {
  float d;
  char c;
  printf("Enter a number : ");
  scanf("%f%c",&d,&c);
  switch ( c) {
  case 'i':
    printf("%.2f\" = %.2f cm",d, d*2.54);
    break;
  case 'c':
    printf("%.2f cm = %.2f\"",d, d/2.54);
    break;
  default:
    printf("Wrong format!\n");
    
  }
}
