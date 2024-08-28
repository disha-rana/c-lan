#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("total array:");
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}