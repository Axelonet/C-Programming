#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&b);
    for (a=1;a<21;a++)
    {
        printf("%d x %d = %d \n",b,a,a*b);
    }
    return 0;
}