#include<stdlib.h>
#include<stdio.h>
int main()
{
    printf("Simple Interest Calculation Program\n");
    int Principal_amount;
    int rate__of_interest=6;
    int time;
    printf("Enter the principal Amount\n");
    scanf("%d",&Principal_amount);

    printf("Enter the time\n");
    scanf("%d",&time);


    double simple_interest;

    simple_interest=(Principal_amount * rate__of_interest * time)/100;
    
    printf("%lf\n",simple_interest);
    return 0;

}