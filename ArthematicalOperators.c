//
//  main.c
//  Arthematical Operations
//
//  Created by Aditya Pudipeddi on 09/08/16.
//  Copyright © 2016 Aditya Pudipeddi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two integer values ");
    scanf("%d %d",&a,&b);
    
    printf("Enter a number between 1 and 5\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n");
    scanf("%d",&c);
    
    switch (c)
    {
        case 1 :
            printf("The Addition of two numbers is %d\n",a+b);
            break;
    
        case 2 :
            printf("The Subtraction of two numbers is %d\n",a-b);
            break;
        
        case 3 :
            printf("The Multiplication of two numbers is %d\n",a*b);
            break;
            
        case 4 :
            printf("The Division of two numbers is %d\n",a/b);
            break;
            
        case 5 :
            printf("The remainder when first divides second is %d\n",a%b);
            break;
        default :
            printf("Enter a number only between 1 and 5");
    }
    return 0;
}

    
   
    