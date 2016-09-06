//
//  SumOfN.c
//  
//
//  Created by Aditya Pudipeddi on 01/09/16.
//
//

#include <stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
        s +=i;
    printf("%d",s);
}