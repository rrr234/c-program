#include<stdio.h>
#include<string.h>
 typedef struct BankAccount {
 	int accountNo;
 	char name[100];
 	
 } acc;
 int main()
 {
 	acc acc1 = {123, "divyansh"};
 	acc acc2 = {1234, "anshu"};
 	acc acc3 = {12, "vyan"};
 	
 	printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s\n", acc1.name);
    printf("acc no = %d\n", acc2.accountNo);
    printf("name = %s\n", acc2.name);
 	return 0;
 }
