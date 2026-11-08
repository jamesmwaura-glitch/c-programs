#include <stdio.h>
int main (void){

int bundles;
int cost;

printf("0ption  bundles  cost(KES)\n");
printf("   1     100MB      50\n");
printf("   2     500MB      200\n");
printf("   3     1GB        350\n");
printf("   4     2GB        600\n");
printf("Enter your prefered choice(1-4.)\n");
scanf("%d",&bundles);
  
  switch (bundles){
    case 1:
    printf("100MB");
    break;
    case 2:
    printf("500MB");
    break;
    case 3:
    printf("1GB");
    break;
    case 4:
    printf("2GB");
    break;

  default:
  printf("Invailed choice");
  }
return 0;
}

