#include<stdio.h>
#include<string.h>

// user defined
struct student {
	int roll;
	char name[100];
	float cgpa;
};
int main() {
	struct student ece[100];
	ece[0].roll = 734699;
	ece[0].cgpa = 8.8;
	strcpy(ece[0].name,"divyansh");
	
	printf("student name = %c\n", ece[0].name);
	printf("student roll = %d\n",ece[0].roll );
	printf("student cgpa = %f\n", ece[0].cgpa );
	return 0;
}
