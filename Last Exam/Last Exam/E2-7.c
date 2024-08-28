#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    float a[n], b[n], sum[n];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%f", &a[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%f", &b[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        sum[i] = a[i] + b[i];
    }

    printf("Sum of the two arrays:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%.2f ", sum[i]);
    }
    printf("\n");

}