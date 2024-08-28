
#include<stdio.h>
#include<conio.h>
main()
{
	int y1,y2;
	clrscr();
	printf("enter yaer1:");
	scanf("%d",&y1);
	printf("enter yaer2:");
	scanf("%d",&y2);

	for(; y1<=y2; y1++)
	{
		if(y1% 4==0)
		{
			printf("%d\t",y1);

		}
	}
	getch();
}