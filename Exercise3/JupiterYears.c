#include <stdio.h>
int earthDaysToJupiterYears(int i_EarthDays, double d_JupiterYear);

int main(void)
{
    double d_DaysInOneYear = 365.2425;
    double d_OneYearOnJupiter = 12 * d_DaysInOneYear;

    int i_EarthDays = 0;
    printf("Please enter Earth days\n");
    scanf("%d",&i_EarthDays);

    earthDaysToJupiterYears(i_EarthDays,d_OneYearOnJupiter);
    
    return 0;
}

int earthDaysToJupiterYears(int i_EarthDays, double d_JupiterYear)
{
    double d_JupiterYears = i_EarthDays / d_JupiterYear;
    printf("%d Earth days is %.2f Jupiter years",i_EarthDays, d_JupiterYears);
    return 0;
}