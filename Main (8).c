#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[20];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student student;
    int using_sample_data = 0;

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        using_sample_data = 1;
        printf("'results.dat' not found; displaying sample records instead.\n");
    }

    printf("--- Student Examination Results Report ---\n\n");
    printf("%-30s %-15s\n", "Student Name", "Total Marks");
    printf("---------------------------------------------\n");

    if (using_sample_data) {
        printf("%-30s %-15.2f\n", "Sample Student One", 85.50f);
        printf("%-30s %-15.2f\n", "Sample Student Two", 92.00f);
    } else {
        while (fread(&student, sizeof(struct Student), 1, file) == 1) {
            student.name[sizeof(student.name) - 1] = '\0';
            printf("%-30s %-15.2f\n", student.name, student.total_marks);
        }
        fclose(file);
    }


    printf("---------------------------------------------\n");
    printf("End of records.\n");

    return 0;
}