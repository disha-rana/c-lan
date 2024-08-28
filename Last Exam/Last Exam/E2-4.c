#include<stdio.h>
int main()
{
    int sum=0,div=0,mod=0,mul=0,sub=0,cal,a,b;
    printf("enter the number :");
    scanf("%d",&a);
    printf("enter the number :");
    scanf("%d",&b);

    printf("1)sum");
    printf("2)sub");
    printf("3)mod");
    printf("4)div");
    printf("5)mul");
    scanf("%d",&cal);
    switch(cal)
    {
        case 1 : printf("add");
            printf("sum of %d and %d :%d",a,b,a+b);
            break;
        case 2 : printf("sub");
            printf("sub of %d and %d :%d",a,b,a-b);
            break;
        case 3 : printf("mod");
            printf("mod of %d and %d :%d",a,b,a%b);
            break;        
        case 4 : printf("div");
            printf("div of %d and %d :%d",a,b,a/b);
            break;
        case 5 : printf("mul");
            printf("mul of %d and %d :%d",a,b,a*b);
            break;    
    }

}