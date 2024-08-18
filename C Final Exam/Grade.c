#include<stdio.h>

int main()
{
    int gujrati, hindi, english, science, maths;
    float sum, avg;
    char grade;

    printf("Enter Marks of Gujarati: ");
    scanf("%d", &gujrati);
    printf("Enter Marks of Hindi: ");
    scanf("%d", &hindi);
    printf("Enter Marks of English: ");
    scanf("%d", &english);
    printf("Enter Marks of Science: ");
    scanf("%d", &science);
    printf("Enter Marks of Maths: ");
    scanf("%d", &maths);

    sum = gujrati + hindi + english + science + maths;

    avg = sum / 5;

    if(avg >= 90 && avg <= 100)
    {
        printf("Total Marks: %.2f/500\n", sum);
        printf("Result: %.2f%%\n", avg);
        grade = 'A';
        printf("Grade: %c", grade);
    }
    else if(avg >= 80 && avg <= 89)
    {
        printf("Total Marks: %.2f/500\n", sum);
        printf("Result: %.2f%%\n", avg);
        grade = 'B';
        printf("Grade: %c", grade);
    }
    else if(avg >= 70 && avg <= 79)
    {
        printf("Total Marks: %.2f/500\n", sum);
        printf("Result: %.2f%%\n", avg);
        grade = 'C';
        printf("Grade: %c", grade);
    }
    else if(avg >= 60 && avg <= 69)
    {
        printf("Total Marks: %.2f/500\n", sum);
        printf("Result: %.2f%%\n", avg);
        grade = 'D';
        printf("Grade: %c", grade);
    }
    else if(avg >= 50 && avg <= 59)
    {
        printf("Total Marks: %.2f/500\n", sum);
        printf("Result: %.2f%%\n", avg);
        grade = 'E';
        printf("Grade: %c", grade);
    }
    else
    {
        printf("Total Marks: %.2f/500\n", sum);
        printf("Result: %.2f%%\n", avg);
        grade = 'F';
        printf("Grade: %c", grade);
    }

    return 0;
}