//
//  3VariableSwap.c
//  
//
//  Created by Aditya Pudipeddi on 31/08/16.
//
//

#include <stdio.h>
int main()
{
    float  a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    a = a * b * c;
    b = a * b;
    c = b * c;
    b = a / b;
    c = a / c;
    a = a / (b * c);
    printf("The swapped numbers are %f %f %f",a,b,c);
    return 0;
}