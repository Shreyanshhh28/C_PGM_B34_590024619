#include <stdio.h>

int main() {
    int n, bin[32], i = 0, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("0\n");
        return 0;
    }
    while(n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
    printf("\n");

    return 0;
}
