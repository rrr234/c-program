#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]);
int main()
{
	char firststr[] = "hello";
	char secstr[] = "world";
	strcat(firststr, secstr);
	puts(firststr);
	
}
int countLength(char arr[]){
	int count = 0;
	for(int i=0; arr[i] != '\0';i++){
		count++;
	}
	return count-1;
}



void printString(char arr[]){
	for(int i=0; arr[i] != '\0';i++){
		printf("%c", arr[i]);
	}
	printf("/n");
}
