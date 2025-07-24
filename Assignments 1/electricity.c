#include <stdio.h>

int main(){
    int charge;
    float bill = 0;
    printf("electricity unit charges: ");
    scanf("%d",&charge);
    
    if (charge >=  50){
        bill = bill + 50 * 0.5;
        charge -= 50;
        if (charge >= 100)
        {
            bill = bill + 100 * 0.75;
            charge -= 100; 
            if (charge >= 100)
            {
                bill = bill + 100 * 1.2;
                charge -= 100;
                if (charge >= 250)
                {
                    bill = bill + 100 * 1.5;
                    charge -= 100;
                }
                else
                {
                    bill = bill + charge * 1.5;
                }
            }
            else
            {
                bill = bill + charge * 1.2;
            }

        }
        else
        {
            bill = bill + charge * 0.75;
        }
    }
    else 
    {
        bill = bill + charge * 0.5;
    }
    bill = bill + bill * 0.2;
    printf("Total eelctricity Bill = %f",bill);

    return 0;
}