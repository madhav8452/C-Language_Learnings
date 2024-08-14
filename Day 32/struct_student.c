#include <stdio.h>
#include <string.h>

struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main() {
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Student ID: ");
        scanf("%d", &students[i].stu_id);

        printf("Student Name: ");
        scanf("%s", students[i].stu_name);

        printf("Student Age: ");
        scanf("%d", &students[i].stu_age);

        printf("Student Course: ");
        scanf("%s", students[i].stu_course);

        printf("Student City: ");
        scanf("%s", students[i].stu_city);

        printf("Student Standard: ");
        scanf("%d", &students[i].stu_standard);

        printf("Student School: ");
        scanf("%s", students[i].stu_school);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", students[i].stu_id);
        printf("Name: %s\n", students[i].stu_name);
        printf("Age: %d\n", students[i].stu_age);
        printf("Course: %s\n", students[i].stu_course);
        printf("City: %s\n", students[i].stu_city);
        printf("Standard: %d\n", students[i].stu_standard);
        printf("School: %s\n", students[i].stu_school);
    }

    return 0;
}
