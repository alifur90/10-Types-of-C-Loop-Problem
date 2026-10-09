#include <stdio.h>

int main()
 {
    int n;

    do {
        printf("Enter a number : ");
        scanf("%d", &n);

        if (n >= 0)
        {
            printf("Positive number\n");
        }
        else {

            printf("Negative number\n");
        }

       }
       while (n != 0);
}
