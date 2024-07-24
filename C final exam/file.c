#include <stdio.h>

int main() {
    int N;

    printf("Ente rnumber of fruits: ");
    scanf("%d", &N);

    FILE *fp = fopen("data.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
    }

    char fruit[50], color[50];
    
    for(int i = 0; i < N; i++)
    {
        printf("Enter fruit name %d: ", i + 1);
        scanf("%s" ,&fruit);
        printf("Enter color name: ");
        scanf("%s", &color);
        
        fprintf(fp, "%s %s\n", fruit, color);
    }

    fclose(fp);
    printf("Data written to data.txt successfully!\n");

    return 0;
}