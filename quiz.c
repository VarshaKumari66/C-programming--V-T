#include <stdio.h>

int main() {
    int score = 0;
    int ans1, ans2, ans3;

    printf("=== QUIZ APPLICATION ===\n");

    printf("\nQ1. Which data type is used to store text in C?\n");
    printf("1. int\n2. float\n3. char\n");
    printf("Your answer (1-3): ");
    scanf("%d", &ans1);
    if(ans1 == 3) { printf("Correct!\n"); score++; } else { printf("Wrong.\n"); }

    printf("\nQ2. Which loop is guaranteed to execute at least once?\n");
    printf("1. for\n2. do-while\n3. while\n");
    printf("Your answer (1-3): ");
    scanf("%d", &ans2);
    if(ans2 == 2) { printf("Correct!\n"); score++; } else { printf("Wrong.\n"); }

    printf("\nQ3. What is the index of the first element in a C array?\n");
    printf("1. 0\n2. 1\n3. -1\n");
    printf("Your answer (1-3): ");
    scanf("%d", &ans3);
    if(ans3 == 1) { printf("Correct!\n"); score++; } else { printf("Wrong.\n"); }

    printf("\n=== FINAL RESULT ===\n");
    printf("Your Score: %d out of 3\n", score);

    return 0;
}
