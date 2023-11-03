#include<stdio.h>
void printAddress(int *n);
int main()
{  
   int n = 4;
   printAddress(&n);
   	printf("addresss of n is : %u\n", &n);
   return 0;
}
void printAddress(int *n){
	printf("addresss of n is : %u\n", n);
}
