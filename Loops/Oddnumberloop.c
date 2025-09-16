#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d are:\n", n);

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i += 2) { // Increment by 2 to get only odd numbers
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}