#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i, searchRoll, found = 0;

    // Create file and write records
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 0;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Roll Number: ");
        scanf("%d", &s.roll);
        printf("Enter Name: ");
        scanf("%s", s.name);
        printf("Enter Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);

    // Read and display file contents
    fp = fopen("students.txt", "r");
    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        printf("Roll: %d  Name: %s  Marks: %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);

    // Search student by roll number
    fp = fopen("students.txt", "r");
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        if (s.roll == searchRoll) {
            found = 1;
            printf("\n--- Student Found ---\n");
            printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
            break;
        }
    }
    fclose(fp);

    if (!found)
        printf("\nRecord not found.\n");

    return 0;
}
