#include <stdio.h>

int main ()
{
    int sum=0,i;

    for(i=2;i<=100;i=i+2)
    {
        printf("Sum of all even numbers is : %d\n",sum,sum=sum+i);
    }
}
