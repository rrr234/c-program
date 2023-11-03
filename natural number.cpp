#include<stdio.h>
int main()
{
	int n;
	printf("enter any integers \n");
	scanf("%d", &n);
	
	if ( n > 0){
		printf("it is a natural number \n");
	}
	else {
		printf("it is not a natural number \n");
	}
	return 0;
}
