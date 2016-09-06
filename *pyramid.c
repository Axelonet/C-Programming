#include <stdio.h>

int main()
{
    int row,i,j=0,k=0;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=row-i;++j)
        {
            printf(" ");
        }
        for (k=row-1;k>=row - i;k--)
        {
            printf("* ");
        }

        
        printf("\n");
    }
}