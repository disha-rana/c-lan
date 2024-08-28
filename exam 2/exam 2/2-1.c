#include<stdio.h>
int main()
{
    int l=0,r,c;
    printf("enter r:");
    scanf("%d",&r);
    printf("enter c:");
    scanf("%d",&c);
    int a[3][3];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]>l)
            {
                 l = a[i][j];
            }
        }
    }
    printf("largest element:%d",l);
    
}