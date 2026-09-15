#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n, choice, sumEven = 0, sumOdd = 0, sumPrime = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (1) {
        printf("\nMenu:\n1. Sum of even and odd numbers\n2. Sum of prime numbers\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sumEven = 0; sumOdd = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) sumEven += arr[i];
                    else sumOdd += arr[i];
                }
                printf("Sum of even numbers: %d\n", sumEven);
                printf("Sum of odd numbers: %d\n", sumOdd);
                break;
            case 2:
                sumPrime = 0;
                for (int i = 0; i < n; i++)
                    if (isPrime(arr[i])) sumPrime += arr[i];
                printf("Sum of prime numbers: %d\n", sumPrime);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}