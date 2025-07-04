#include <stdio.h>  // Fixed typo in the header

int main() {
    char Name[50];
    int Age = 0;

    printf("Enter your name: ");
    scanf("%s", Name);

    printf("Enter your age: ");
    scanf("%d", &Age);  // Added '&' to pass address of Age

    printf("- - - - - -\n");
    printf("Hello %s\n", Name);  // Replaced ___ with Name
    printf("Age = %d\n", Age);   // Replaced ___ with Age

    return 0; // Best practice to return from main
}