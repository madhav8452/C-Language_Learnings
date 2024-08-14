#include<stdio.h>

int main()
{
    FILE *fptr;
    int i;

    fptr = fopen("Divisible_by_3_and_5.txt", "w");

    if(fptr == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    for(i = 1; i <= 50; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
    printf("Number divisible by 3 and 5 written to file successfully.\n");

    return 0;
}