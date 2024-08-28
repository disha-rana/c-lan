#include <stdio.h>

int main() 

{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    for (int i = 1; i <= 10; i++) 
    {
        printf("%.2f * %d = %.2f\n", num, i, num * i);
    }

}