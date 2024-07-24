#include <stdio.h>

int main() {
    int eng,hindi,maths,science,gujarati;
    float total, avg;
    char grade;

    printf("Enter marks of English: ");
    scanf("%d", &eng);
    printf("Enter marks of Maths: ");
    scanf("%d", &maths);
    printf("Enter marks of Science: ");
    scanf("%d", &science);
    printf("Enter marks of Hindi: ");
    scanf("%d", &hindi);
    printf("Enter marks of Gujarati: ");
    scanf("%d", &gujarati);

    printf("--------------------------------\n");
    total = eng + maths + science + hindi + gujarati;
    printf("Total Marks: %d\n", total);

    avg = total / 5;
    printf("Result: %0.2f\n", avg);

    if (avg >= 90) 
    {
        grade = 'A';
    } 
    else if (avg >= 80) 
    {
        grade = 'B';
    } 
    else if (avg >= 70) 
    {
        grade = 'C';
    } 
    else if (avg >= 60) 
    {
        grade = 'D';
    } 
    else if (avg >= 40) 
    {
        grade = 'D';
    } 
    else 
    {
        grade = 'F';
    }

    printf("Grade: %c", grade);
}