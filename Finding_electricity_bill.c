#include <stdio.h>

int main() {
    int unit_charge;
    float bill, bill1,bill2,bill3,bill4,total;
    
    printf("\nEnter the unit charge used by You\n");
    scanf("%d", &unit_charge);
    
    printf("**********ELECTRICITY BILL**********");
    
    if(unit_charge<=50)
    {
        bill=unit_charge*4.50;
        bill1=0.20*bill;// additional surcharge of 20% of bill
        total=bill+bill1;
        printf("\nYour bill is %.2f", bill);
        printf("\nAdditional surcharge is %.2f",bill1);
        printf("\nYOUR TOTAL BILL IS %.2f",total);
    }   
    else if(50<unit_charge<=150)
    {
        bill=unit_charge*5.50;
        bill2=0.20*bill;// additional surcharge of 20% of bill
        total=bill+bill2;
        printf("\nYour bill is %.2f", bill);
        printf("\nAdditional surcharge is %.2f",bill2);
        printf("\nYOUR TOTAL BILL IS %.2f", total);
    }
    else if(150<unit_charge<=250)
    {
        bill=unit_charge*6.50;
        bill3=0.20*bill;// additional surcharge of 20% of bill
        total=bill+bill1;
        printf("\nYour bill is %.2f", bill);
        printf("\nAdditional surcharge is %.2f",bill1);
        printf("\n YOUR TOTAL BILL IS %.2f", total);
    }
    else
    {
        bill=unit_charge*8;
        bill4=0.20*bill;// additional surcharge of 20% of bill
        total=bill+bill1;
        printf("\nYour bill is %.2f", bill);
        printf("\nAdditional surcharge is %.2f",bill1);
        printf("\nYOUR TOTAL BILL IS %.2f", total);
    }
    
    return 0;
}
