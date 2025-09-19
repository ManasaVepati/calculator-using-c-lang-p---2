#include <stdio.h>

// Function declarations
void add(float num1, float num2);
void subtract(float num1, float num2);
void multiply(float num1, float num2);
void divide(float num1, float num2);

int main() {
    int choice;
    float num1, num2;

    // Display menu to the user
    printf("Simple Calculator\n");
    printf("------------------\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Keep running the calculator until the user chooses to exit
    while (choice != 5) {
        // Get the two numbers from the user
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Switch case to handle the user's choice
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    divide(num1, num2);
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        // Display the menu again and ask for the next action
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    }

    printf("Exiting calculator. Goodbye!\n");
    return 0;
}

// Function to add two numbers
void add(float num1, float num2) {
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
}

// Function to subtract two numbers
void subtract(float num1, float num2) {
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}

// Function to multiply two numbers
void multiply(float num1, float num2) {
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
}

// Function to divide two numbers
void divide(float num1, float num2) {
    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
}

