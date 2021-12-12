#include <stdio.h>
int cupsCalculation(int i_oz, int i_cupToOz);

int main(void)
{
    int i_OneCupToOz = 8;
    int i_OzWanted = 0;
    
    printf("Please enter how much 'oz' do you want:\n");
    scanf("%d",&i_OzWanted);

    cupsCalculation(i_OzWanted, i_OneCupToOz);
    return 0;

}

int cupsCalculation(int i_oz, int i_cupToOz)
{
    int i_cups = i_oz / i_cupToOz;

    printf("For %doz you will have %d Cups of your desired beverage.\n", i_oz, i_cups);
    return 0;
    
}