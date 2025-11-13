include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        numerator += 2;    // Next odd number
        denominator += 2;  // Next even number
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}