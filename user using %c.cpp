#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]);
int main()
{
    char str[100];
    char ch;
    int i = 0;
    
    while(ch != '\n'){
    	scanf("%c", &ch);
    	str[i] = ch;
    	i++;
	}
	str[i] = '\0';
	puts(str);
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
