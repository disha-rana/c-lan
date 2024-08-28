#include<stdio.h>

main()
{
	int first,second,third=180,f;
	int sum;
	clrscr();

	printf("frist angle",first);
	scanf("%d",&first);
	printf("second angle",second);
	scanf("%d",&second);
	sum=first+second;
	printf("sum of %d and %d :%d\n",sum);
	f=third-sum;
	printf("sub of %d and %d :%d\n",f);
	getch();
}