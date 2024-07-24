#include <stdio.h>

struct Laptop
{
    char company_name[50];
    char processor[50];
    int price;
};

int main() {
    struct Laptop laptop[50];
    int N;

    printf("Enter the Number of laptop: ");
    scanf("%d", &N);

    if(N <= 0)
    {
        printf("Invalid numbers of laptops.\n");
    }

    for(int i = 0; i < N; i++)
    {
        printf("Enter details of laptops %d: \n", i + 1);
        printf("Enter company name: ");
        scanf("%s", laptop[i].company_name);
        printf("Processor: ");
        scanf("%s", laptop[i].processor);
        printf("Price: ");
        scanf("%d", &laptop[i].price);
    }
    printf("------------------------------------\n");
    printf("Laptop Details:\n");
    for(int i = 0; i < N; i++)
    {
        printf("Laptop: %d\n", i + 1);
        printf("Company Name: %s\n", laptop[i].company_name);
        printf("Processor: %s\n", laptop[i].processor);
        printf("Price: %d", laptop[i].price);
        printf("\n");
        printf("\n");
    }

    return 0;
}