#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[150];
    char choice;

    printf("--- Library Borrowed Books Tracker ---\n");

    do{
        printf("\nEnter the title of the borrowed book: ");
        
        if (fgets(title, sizeof(title), stdin) != NULL) {
        
            title[strcspn(title, "\n")] = '\0';
        }

        file = fopen("borrowed_books.txt", "a");
        if (file == NULL) {
            printf("Error: Could not open file for writing.\n");
            return 1;
        }

        fprintf(file, "%s\n", title);

    
        fclose(file);

        
        printf("Confirmation: '%s' has been successfully stored in borrowed_books.txt.\n", title);

        printf("Would you like to enter another book? (y/n): ");
        scanf(" %c", &choice);

    
        while (getchar() != '\n');

    } while (choice == 'y' || choice == 'Y');

    printf("\nExiting program. All records have been saved securely.\n");
    return 0;
}











































