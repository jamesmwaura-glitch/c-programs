#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    int age;
    char grade;
    float marks;
    float height;

};
int main(){
    struct student student1;
    
   /*
   strcpy(student1.name,"james kariuki");
    student1.age=27;
    student1.grade='A';
    student1.marks=351.5;
    student1.height=150.4;
    */

 printf("Enter your name; ");
 //scanf("%s",&student1.name);
 fgets(student1.name,sizeof(student1.name),stdin);

 printf("Enter your age: ");
 scanf("%d",&student1.age); 
 
printf("Enter your grade: ");
 scanf(" %c",&student1.grade);

 printf("Enter your marks: ");
 scanf("%f",&student1.marks);

 printf("Enter your height: ");
 scanf("%f",&student1.height);
 
  

    printf("\nMy name: %s",student1.name);
    printf("My age: %d\n",student1.age);
    printf("My grade: %c\n",student1.grade);
    printf("My marks: %.2f\n",student1.marks);
    printf("My height: %.2f",student1.height);

    return 0;
}