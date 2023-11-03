#include<stdio.h>
main()
{
	int i,j;
    char ch = 'A';
    for(i=1; i<=26; i++){
    	for(j=1; j<=i; j++){
    		printf("%c", ch);
    		ch++;
		}
		ch = 'A';
		printf("\n");
	}
	return 0;
}
