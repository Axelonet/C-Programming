//
//  Assignment.c
//  
// To print sum of all odd and even separately of all numbers entered by user and should be terminated when typed 0
//  Created by Aditya Pudipeddi on 01/09/16.
//
//

#include <stdio.h>

int main()
{
    int a=0,b=0,n;
    
    do
    {
        printf("Enter a value : ");
        scanf("%d",&n);
        if (n % 2 == 0)
        {
            a += n;
            
        }
        else
        {
            b += n;
        }
        
    }while (n != 0);
    
    
    printf("The sum of even and odd are %d and %d",a,b);
    
}