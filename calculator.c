#include <stdio.h>
#include <math.h>

void add() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a + b);
}

void subtract() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a - b);
}

void multiply() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a * b);
}

void divide() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("Result: %.2f\n", a / b);
    else
        printf("Error: Division by zero!\n");
}

void power() {
    double base, exp;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exp);
    printf("Result: %.2f\n", pow(base, exp));
}

int main() {
    int choice;
    while(1) {
        printf("\n=== SCIENTIFIC CALCULATOR ===\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power (x^y)\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 6) break;
        
        switch(choice) {
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: divide(); break;
            case 5: power(); break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
