#include<stdio.h>
main()
{
	int a,b;
	printf("Enter first number");
	scanf("%d", &a);
	printf("Enter second number");
	scanf("%d", &b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Value after swapping");
	printf("Value of A %d",a);
	printf("Value of B %d",b);
	return 0;
}
