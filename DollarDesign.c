#include<stdio.h>

int main()
{
    int i,j;
    for (i=5;i>=0;i--)
    {
        for (j=5;j>=5-i;j--)
            printf("$ ");
        printf("\n");
    }
    for (i=5;i>=0;i--)
    {
        for (j=5;j>=i;j--)
            printf("$ ");
        printf("\n");
    }

}