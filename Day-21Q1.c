#include <stdio.h>

int main() {
    int n, original, first, last, temp, digits = 0, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    last = n % 10;  // get last digit

    // Find first digit and number of digits
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    // If only one digit, no change
    if (n < 10) {
        printf("%d", n);
        return 0;
    }

    // Remove first and last digits
    int middle = original % 1; // placeholder, will be updated
    int divisor = 1;
    for (int i = 0; i < digits; i++) {
        divisor *= 10;
    }

    middle = original % divisor; // remove first digit
    middle = middle / 10;        // remove last digit

    // Build swapped number using integer math
    swapped = last;
    swapped = swapped * divisor + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}
