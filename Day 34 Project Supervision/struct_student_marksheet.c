#include<stdio.h>

struct student
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main()
{
    int n;

    printf("Enter How many Students: ");
    scanf("%d", &n);

    struct student students[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of students: %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", &students[i].name);

        printf("Enter Chamistry Marks: ");
        scanf("%d", &students[i].chem_marks);

        printf("Enter Maths Marks: ");
        scanf("%d", &students[i].maths_marks);

        printf("Enter Physics Marks: ");
        scanf("%d", &students[i].phy_marks);
    }

    printf("========================================\n");
    printf("\nMarksheet of Students:\n");
    
    for(int i = 0; i < n; i++)
    {
        printf("Name: %s(%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry: %d\n", students[i].chem_marks);
        printf("Maths: %d\n", students[i].maths_marks);
        printf("Physics: %d\n", students[i].phy_marks);

        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;

        printf("Total: %d/300\n", total);

        float percent = total / 3;

        printf("Percent: %.2f%%\n", percent);
        printf("----------------------------------------\n");
    }

    return 0;
}
