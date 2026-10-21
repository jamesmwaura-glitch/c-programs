#include <stdio.h>
int main(void)
{

    const int password=1234; 
   int enteredpassword;

    printf("Enter the correct password:  \n");
    scanf("%d",&enteredpassword);
    
    
    if(enteredpassword!=1234){
        printf("Access Denied");
    }
    else{
    printf("Access Granted");
    }
    return 0;
}