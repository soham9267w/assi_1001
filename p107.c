#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    printf("First %d natural numbers in reverse order:\n", n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

