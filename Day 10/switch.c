#include <stdio.h>

int main() {
    int choice, english, hindi, gujarati;
    
    printf("Press 1 for English \n");
    printf("Press 2 for Hindi \n");
    printf("Press 3 for Gujarati \n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("English \n");
        printf("------------------------------------------------- \n");
        printf("Press 1 for Internet Recharge \n");
        printf("Press 2 for Top-up Recharge \n");
        printf("Press 3 for Special Recharge \n");
        printf("Enter Your Choice: ");
        scanf("%d", &english);

            switch (english)
            {
            case 1:
                printf("You have done successfully done a Internet Recharge. \n");
                printf("------------------------------------------------- \n");
                break;
            case 2:
                printf("You have done successfully done a Top-up Recharge. \n");
                printf("------------------------------------------------- \n");
                break;
            case 3:
                printf("You have done successfully done a Special Recharge. \n");
                printf("------------------------------------------------- \n");
                break;
            default:
                printf("Invalid Choice...");
                break;
            }
        break;

    case 2:
        printf("Hindi \n");
        printf("------------------------------------------------- \n");
        printf("Internet Recharge ke liye 1 Dabaiye \n");
        printf("Top-up Recharge ke liye 2 Dabaiye \n");
        printf("Special Recharge ke liye 3 Dabaiye \n");
        printf("Enter Your Choice: ");
        scanf("%d", &hindi);

            switch (hindi)
            {
            case 1:
                printf("Aapne sadfaltapurvak Internet Recharge kar liya he. \n");
                printf("------------------------------------------------- \n");
                break;
            case 2:
                printf("Aapne sadfaltapurvak Top-up Recharge kar liya he. \n");
                printf("------------------------------------------------- \n");
                break;
            case 3:
                printf("Aapne sadfaltapurvak Special Recharge kar liya he. \n");
                printf("------------------------------------------------- \n");
                break;
            default:
                printf("Invalid Choice...");
                break;
            }
        break;
    case 3:
        printf("Gujarati \n");
        printf("------------------------------------------------- \n");
        printf("Internet Recharge mate 1 dabavo. \n");
        printf("Top-up Recharge mate 2 dabavo. \n");
        printf("Special Recharge mate 3 dabavo. \n");
        printf("Enter Your Choice: ");
        scanf("%d", &gujarati);

            switch (gujarati)
            {
            case 1:
                printf("Tame safaltapurvak Internet Recharge karyu chhe. \n");
                printf("------------------------------------------------- \n");
                break;
            case 2:
                printf("Tame safaltapurvak Top-up Recharge karyu chhe. \n");
                printf("------------------------------------------------- \n");
                break;
            case 3:
                printf("Tame safaltapurvak Special Recharge karyu chhe. \n");
                printf("------------------------------------------------- \n");
                break;
            default:
                printf("Invalid Choice...");
                break;
            }

        break;
    default:
        printf("Invalid Choice....");
        break;
    }
}