//
//  main.c
//  DecimalToBinary
//
//  Created by Aditya Pudipeddi on 21/08/16.
//  Copyright © 2016 Aditya Pudipeddi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for (a=a; a%2 == 1; a++)
        b = b + a%2;
    
    printf("%d",b);
    
}
 
