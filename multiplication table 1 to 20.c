#include <stdio.h>

int main ()
{
    int num,i;

    printf("Enter The Number : ");
    scanf("%d",&num);

    for(i=1;i<=20;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
}
