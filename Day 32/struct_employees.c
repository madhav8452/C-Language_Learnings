#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        printf("Employee Name: ");
        scanf("%s", employees[i].emp_name);

        printf("Employee Age: ");
        scanf("%d", &employees[i].emp_age);

        printf("Employee Role: ");
        scanf("%s", employees[i].emp_role);

        printf("Employee City: ");
        scanf("%s", employees[i].emp_city);

        printf("Employee Experience: ");
        scanf("%d", &employees[i].emp_experience);

        printf("Employee Company Name: ");
        scanf("%s", employees[i].emp_company_name);
    }

    printf("\nEmployee Records:\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].emp_name);
        printf("Age: %d\n", employees[i].emp_age);
        printf("Role: %s\n", employees[i].emp_role);
        printf("City: %s\n", employees[i].emp_city);
        printf("Experience: %d years\n", employees[i].emp_experience);
        printf("Company: %s\n", employees[i].emp_company_name);
    }

    return 0;
}
