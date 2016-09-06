//
//  Weather.c
//  
//
//  Created by Aditya Pudipeddi on 31/08/16.
//
//

#include <stdio.h>
int main()
{
    int i,C,F,K;
    printf("You are going to enter temprature according to which scale \n1.Celcius\n2.Farenheit\n3.Kelvin\nEnter 1,2 or 3 : ");
    
    scanf("%d",&i);
    switch (i)
    {
        case 1 :
            printf("Enter the temprature: ");
            scanf("%d",&C);
            if (C < 0)
            {
                printf("Its Ice!!!");
            }
            else if (0 <= C & C <= 100)
            {
                printf("Its still water :)");
            }
            else
            {
                printf("Its steam :(");
            }
            break;
        case 2 :
            printf("Enter the temprature: ");
            scanf("%d",&F);
            C = (F-32) * (5/9);
            if (C < 0)
            {
                printf("Its Ice!!!");
            }
            else if (0 <= C & C <= 100)
            {
                printf("Its still water :)");
            }
            else
            {
                printf("Its steam :(");
            }
            break;
        case 3 :
            printf("Enter the temprature: ");
            scanf("%d",&K);
            C = K + 273;
            if (C < 0)
            {
                printf("Its Ice!!!");
            }
            else if (0 <= C & C <= 100)
            {
                printf("Its still water :)");
            }
            else
            {
                printf("Its steam :(");
            }
            break;
        default :
        {
            printf("Cant you read! Enter a number between 1 and 3. Is it that difficult.");
        }

            
    }
}
