#include<stdio.h>

int main()
{
    int n;

    printf("Enter Number of Fruits: ");
    scanf("%d", &n);

    FILE *file;

    file = fopen("Fruit_file.txt", "w");

    if(file == NULL)
    {
        printf("Error file opening.\n");
    }

    char fruit[50], color[50];

    for(int i = 0; i < n; i++)
    {
        printf("Enter Fruit: ");
        scanf("%s", &fruit);
        printf("Enter Color: ");
        scanf("%s", &color);

        fprintf(file, "%s %s\n", fruit,color);
    }

    fclose(file);
    printf("Fruit and color print successfully");

    return 0;
}