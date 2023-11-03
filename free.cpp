#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *) calloc(5, sizeof(int));
    ptr[0] = 1;
	ptr[1] = 4;
	ptr[2] = 5;
	ptr[3] = 6;
	
	for(int i=0; i<5; i++){
		printf("%d\n", ptr[i]);
	}
	
	ptr = realloc(ptr, 6);
	ptr[0] = 1;
	ptr[1] = 4;
	ptr[2] = 5;
	ptr[3] = 6;
	ptr[4] = 8;
	ptr[5] = 12;
	for(int i=0; i<6; i++){
		printf("%d\n", ptr [i]);
	}
 
	return 0;
}
