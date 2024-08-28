#inc
#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	clrscr();
	printf("1) Monday\n");
	printf("2) Thrusday\n");
	printf("3) Wednesday\n");
	printf("4) tuesday\n");
	printf("5) Friday\n");
	printf("6) Saturday\n");
	printf("7) sunday\n");
	scanf("%d",&day);

	switch (day)
	{
	       case 1:
			printf("Monday");
			break;
	       case 2:
			printf("Thrusday");
			break;
	       case 3:
			printf("Wednesday");
			break;
	       case 4:
			printf("Tuesday");
			break;
	       case 5:
			printf("Friday");
			break;
	       case 6:
			printf("Saturday");
			break;
	       case 7:
			printf("sunday");
			break;
	}
	getch();
}