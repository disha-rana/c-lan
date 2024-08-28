#include<stdio.h>
int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            printf("value of a:%d\n",a[i]);
        }
    }
}
