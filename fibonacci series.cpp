#include<stdio.h>
#include<conio.h>
main()
{
long int a=1, n,i=3, c;
	long int b=1;
	printf("Enter the fabonacci series term :");
	scanf("%ld", &n);
	printf("\t%ld", a);
	printf("\t%ld", b);
	
	for(i=3; i<=n; i++)
	{
		c=a+b;
		printf("\t%ld", c);
		a=b;
		b=c;
	}
	getch();
}
