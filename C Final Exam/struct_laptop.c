#include<stdio.h>

struct Laptop
{
    char company_name[50];
    char processor[50];
    int price;
};

int main()
{
    int n;

    printf("Enter number of laptop: ");
    scanf("%d", &n);

    struct Laptop laptop[n];

    if(n <= 0)
    {
        printf("Maximum enter atleast 1 Laptop details.\n");
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            printf("\nEnter details of laptop: %d\n", i + 1);

            printf("Company name: ");
            scanf("%s", &laptop[i].company_name);
            printf("Processor: ");
            scanf("%s", &laptop[i].processor);
            printf("Price: ");
            scanf("%d", &laptop[i].price);
        }
    }

    printf("========================================\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nLaptop: %d\n", i + 1);
        printf("Company Name: %s\n", laptop[i].company_name);
        printf("Processor: %s\n", laptop[i].processor);
        printf("Price: %d\n", laptop[i].price);
    }

    return 0;
}