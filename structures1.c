#include <stdio.h>
#include <string.h>

struct productcontaining{
    int productcode;
    char productname[50];
    float unitprice;
    int quantityinstock;
};

int main(){

    float totalvalueofavailablestock;

    struct productcontaining productcontaining1;

    printf("Enter product name: ");
    fgets(productcontaining1.productname, sizeof(productcontaining1.productname), stdin);

 printf("Enter product code: ");
    scanf("%d", &productcontaining1.productcode);

    printf("Enter unit price: ");
    scanf("%f",&productcontaining1.unitprice);

    printf("Enter quantity in stock: ");
    scanf("%d",&productcontaining1.quantityinstock);

    printf("\n%s",productcontaining1.productname);
    printf("%d\n",productcontaining1.productcode);
    printf("%.2f\n",productcontaining1.unitprice);
    printf("%d\n",productcontaining1.quantityinstock);

    totalvalueofavailablestock=productcontaining1.unitprice*productcontaining1.quantityinstock;

    printf("Total value of available stock: %.2f\n",totalvalueofavailablestock);

    return 0;
}
