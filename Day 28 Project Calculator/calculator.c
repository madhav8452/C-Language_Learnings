#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

int modulo(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a % b;
}

int main() {
    char choice;
    int num1, num2, result;

    do {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulo\n");
        printf("q. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %d\n", result);
                break;
            case '2':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %d\n", result);
                break;
            case '3':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %d\n", result);
                break;
            case '4':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = divide(num1, num2);
                printf("Result: %d\n", result);
                break;
            case '5':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = modulo(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 'q':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 'q');

    return 0;
}
