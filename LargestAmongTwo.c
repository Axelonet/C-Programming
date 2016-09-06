//
//  main.c
//  Largest Among Two
//
//  Created by Aditya Pudipeddi on 09/08/16.
//  Copyright © 2016 Aditya Pudipeddi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("%d is greater than %d\n",a,b);
    else
        printf("%d is greater than %d\n",b,a);
}
