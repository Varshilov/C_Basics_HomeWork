#include <stdio.h>
int addDigit(int a, int b);

int main(void)
{
    int a = 1;
    int b = 4;

    int sum = addDigit(a,b);
    printf("Result is: %d",sum);
    return 0;
}

int addDigit(int a, int b)
{
    return a + b;
}