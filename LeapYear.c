//
//  LeapYear.c
//  
//
//  Created by Aditya Pudipeddi on 01/09/16.
//
//

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a year : ");
    scanf("%d",&a);
    if (a % 4 == 1)
    {
        printf("The year is leap year");
        return 0;
    }
    else
    {
        printf("The year is not a leap year");
    }
    return 0;
}
