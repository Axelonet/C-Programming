//
//  DiscountBilling.c
//  
//
//  Created by Aditya Pudipeddi on 31/08/16.
//
//

#include <stdio.h>
int main()
{
    int P1,P2,P3,P4;
    float A,A1,A2,A3,A4;
    
    printf("There are four products P1,P2,P3,P4 \n");
    
    printf("Enter number of P1 bought: ");
    scanf("%d",&P1);
    printf("Enter number of P2 bought: ");
    scanf("%d",&P2);
    printf("Enter number of P3 bought: ");
    scanf("%d",&P3);
    printf("Enter number of P4 bought: ");
    scanf("%d",&P4);
    
    if (P1 >=5000)
        A1 = P1*10*0.9;
    else
        A1 = P1*10;
    
    if (P2 >=10000)
        A2 = P2*25*0.85;
    else
        A2 = P2*25;
    
    if (P3 >=10000)
        A3 = P3*5*0.98;
    else
        A3 = P3*5;
    if (P4 >= 1000)
        A4 = P4*100*0.95;
    else
        A4 = P4*100;
        
    A = A4 + A3 + A2 + A1;
    
    printf("The amount to be paid is %f \n",A);
                

}