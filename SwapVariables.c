//
//  main.c
//  SwapVariables
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
    b = a * b;
    a = b / a;
    b = b / a;
    printf("The numbers after swapping are %d and %d \n",a,b);
}