#include<stdio.h>
main()
{
	int a[6][6], b[6][6], c[6][6], i,j,n;
	
	printf("Entre the order of matrix");
	scanf("%d", &n);
	printf("Enter the elements in first matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &b[i][j]);
			
		}
	}
	printf("Elements of first matrix are \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("Elements of second matrix are \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\n", b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Resultant matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
