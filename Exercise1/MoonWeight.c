#include <stdio.h>
int moonWeightCalculation(int i_weight);

int main ()
{

    int i_UserWeight = 0;

    printf("Please enter your weight:\n");
    scanf ("%d",&i_UserWeight);

    moonWeightCalculation(i_UserWeight);

    return 0;
}

int moonWeightCalculation(int i_weight)
{
    double d_UserMoonWeight = i_weight * 0.17;
    printf("Your Weight on the Moon is %.1fkg.\n",d_UserMoonWeight);
    return 0;
}