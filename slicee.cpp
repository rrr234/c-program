#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);
int main()
{
     char str[] = "helloworld";
     slice(str, 3, 6);
    
	
}
void slice(char str[], int n, int m){ // n & m are valid value
	char newstr[100];
	int j = 0;
	for(int i=n; i<=m; i++, j++){
		newstr[j] = str[i];
	}
	newstr[j] = '\0';
	puts(newstr);
}




void salting(char password[]){
	char salt[] = "123";
	char newPass[200]; 
	
	strcpy(newPass, password); // newPass = "test"
	strcat(newPass, salt); // newPass = "test" + "123";
	puts(newPass);
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
