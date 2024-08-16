#include<stdio.h>

int main()
{
    FILE *Even;
    FILE *Odd;
    int i;
    int j;

    Even = fopen("Even.txt", "w");
    Odd = fopen("Odd.txt", "w");

    if(Even == NULL)
    {
        printf("Error Creating Even File.\n");
        return 1;
    }
    else
    {
            
        fprintf(Even, "Even Numbers:\n");
        for(i = 50; i <= 70; i++)
        {
            if(i % 2 == 0)
            {
                fprintf(Even, "%d\n", i);
            }
        }
    }

    if(Odd == NULL)
    {
        printf("Error Creating Odd File.\n");
        return 1;
    }
    else
    {
        fprintf(Odd, "Odd numbers:\n");
        for(j = 50; j <= 70; j++)
        {
            if(j % 2 == 1)
            {
                fprintf(Odd, "%d\n", j);
            }
        }
    }

    fclose(Even);
    printf("Even number 50 to 70 print successfully.\n");
    fclose(Odd);
    printf("Odd number 50 to 70 print successfully.\n");

    return 0;
}