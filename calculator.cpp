
		
#include<conio.h>
main()
{
	int a,b,ch;
	printf("Enter the number a, b: ");
	scanf("%d%d", &a, &b);
	printf("enter the choice %d", &ch);
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: 
		{
		printf("addition of two number is %d", a+b);
		break;
		}
		case 2:{
		printf("sub of two number is %d", a-b);
	
		break;#include<stdio.h>
		}
		case 3: {
			printf("mul of two number is %d", a*b);
			break;
		}
		case 4: {
			printf("divide of two numver is %d", a/b);
			break;
		}
		default :
			printf("Wrong choice");
	}
	getch();
}
