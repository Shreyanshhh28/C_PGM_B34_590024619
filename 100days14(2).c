#include <stdio.h>

int main() {
    int n, i, product = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product = product * i;  
    }

    if (n < 2)
        product = 1;

    printf("%d\n", product);
    return 0;
}
