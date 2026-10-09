#include <stdio.h>

int main() {
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    i = n;

    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);


}
