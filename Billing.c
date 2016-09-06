//
//  Billing.c
//  
//
//  Created by Aditya Pudipeddi on 31/08/16.
//
//

#include <stdio.h>
int main()
{
    int P1,P2,P3,P4,stock1=5000,stock2=10000,stock3=10000,stock4=1000;
    printf("There are four products P1,P2,P3,P4 \n");
    printf("Enter number of P1 bought: ");
    scanf("%d",&P1);
    printf("\n Enter number of P2 bought: ");
    scanf("%d",&P2);
    printf("\n Enter number of P3 bought: ");
    scanf("%d",&P3);
    printf("\n Enter number of P4 bought: ");
    scanf("%d",&P4);
    stock1 -= P1;
    stock2 -= P2;
    stock3 -= P3;
    stock4 -= P4;
    if (P1 >= 5000)
    {
        printf("\n P1 is out of stock");
    }
    if (stock2<0)
    {
        printf("\n P2 is out of stock");
    }
    if (stock3<0)
    {
        printf("\n P3 is out of stock");
    }
    if (stock4<0)
    {
        printf("\n P4 is out of stock");
    }
    
    printf("\n Amount to be paid is %2f",P1*10*0.9 + P2*25*0.85 + P3*5*0.98 + P4*100*0.95);
    return 0;
}