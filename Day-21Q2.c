#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find sum of proper divisors
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if perfect number
    if (sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}
