#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
        else
            printf("# ");
    }
    printf("\n");

    return 0;
}
