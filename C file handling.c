#include <stdio.h>
#include <stdlib.h>

void writetofile(void);
void readtofile(void);
void appendtofile(void);

int main(){
writetofile();
readtofile();
appendtofile();
return 0;
}
void writetofile(void){
    FILE *fp;
    char name[300];

    printf("Enter the sentence: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("No sentence was entered.\n");
        exit(1);
    }

    fp=fopen("D:\\c file handling\\c files\\sample.txt","w");
    if(fp==NULL){
        printf("Error saving the file. Try again later.\n");
        exit(1);
    }

    fprintf(fp, "%s", name);
    fclose(fp);
    printf("File saved successfully.\n");
}
void readtofile(void) {
    FILE *fp;
    char name[300];

    fp = fopen("D:\\c file handling\\c files\\sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file for reading.\n");
        exit(1);
    }

    if (fgets(name, sizeof(name), fp) != NULL) {
        printf("Saved sentence: %s", name);
    }

    fclose(fp);
}
void appendtofile(void) {
    FILE *fp;
    char name[300];

    printf("Enter the sentence to append: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("No sentence was entered.\n");
        return;
    }

    fp = fopen("D:\\c file handling\\c files\\sample.txt", "a");
    if (fp == NULL) {
        printf("Error opening the file for appending.\n");
        return;
    }

    if (fputs(name, fp) == EOF) {
        printf("Error appending to the file.\n");
    } else {
        printf("Sentence appended successfully.\n");
    }

    fclose(fp);
}
































    