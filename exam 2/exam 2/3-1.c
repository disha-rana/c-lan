#include<stdio.h>
int main()
{
    int r,c;
    printf("enter r:");
    scanf("%d",&r);
    printf("enter c:");
    scanf("%d",&c);
    int a[3][3];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]:",j,i);
            scanf("%d",&a[j][i]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
}