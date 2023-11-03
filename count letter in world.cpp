#include<stdio.h>
#include<string.h>
int countLetterA(char str[]);
int main()
{
	char str[] = "divyansh saini";
	printf("Letter A : %d", countLetterA(str) );
}
int countLetterA(char str[]){
	int count = 0;
	for(int i=0; str[i] != '\0'; i++){
		if(str[i] == 'a'){
			count++;
		}
	}
	return count;
}
