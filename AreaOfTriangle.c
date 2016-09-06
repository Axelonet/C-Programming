//
//  main.c
//  AreaOfTriangle
//
//  Created by Aditya Pudipeddi on 10/08/16.
//  Copyright © 2016 Aditya Pudipeddi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int height,base,area;
    printf("Enter the height and base of triangle ");
    scanf("%d %d",&height,&base);
    area = height * base ;
    area = area / 2;
    printf("The area of triangle is %d\n",area );
}