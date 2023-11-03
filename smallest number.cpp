#include<stdio.h>
int main()
{   
    int a,b,c,smallest;
    printf("enter threee number :");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    smallest = a;
    if(b<smallest){
    	smallest = b;
	}
	if(c<smallest){
		smallest = c;
	}
	printf("smallest is : %d\n", smallest );
  return 0;
}
 
