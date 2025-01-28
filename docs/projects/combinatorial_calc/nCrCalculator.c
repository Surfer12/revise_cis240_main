/* 1. Recursive Calculation: The calculate_nCr() function uses the combinatorial identity nCr = (n-1)C(r-1) + (n-1)C(r) to compute combinations.
Base Cases:
If r = 0 or r = n, return 1 (only one way to choose 0 or all items)
If r > n or r < 0, return 0 (invalid input)
Input Validation: The program checks if r is between 0 and n, ensuring mathematically valid inputs. */


#include <stdio.h>

// Recursive function to calculate nCr
long long calculate_nCr(int n, int r) {
    // Base cases
    if (r == 0 || r == n) {
        return 1;
    }
    if (r > n || r < 0) {
        return 0;
    }

    // Recursive step:
    // nCr = (n-1)C(r-1) + (n-1)C(r)
    return calculate_nCr(n - 1, r - 1) + calculate_nCr(n - 1, r);
}

int main() {
    int n, r;
    long long result;

    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Validate input
    if (r < 0 || r > n) {
        printf("Invalid input. Ensure 0 <= r <= n.\n");
        return 1;
    }

    // Calculate combinations using the recursive function
    result = calculate_nCr(n, r);

    // Display result
    printf("\nCombinations C(%d, %d) = %lld\n", n, r, result);

    return 0;
}