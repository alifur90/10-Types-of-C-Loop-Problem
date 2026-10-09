#include <stdio.h>

int main()
{
    int n, cnt = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }

    printf("Total Digits = %d", cnt);

    return 0;
}
