#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; // Use long long for larger numbers

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("%lld\n", factorial);
    return 0;
}
