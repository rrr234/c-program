#include<stdio.h>
#include<string.h>
struct student {
	int roll;
	float cgpa;
	char name[100];
};
int main() {
	struct student s1 = {1664, 8.5, "divyansh"};
	printf("student roll = %d\n", s1.roll);
    
    struct student *ptr = &s1;
    printf("student roll with ptr = %d\n", (*ptr).roll);
    printf("student -> roll = %d\n", ptr -> roll);
    printf("student -> cgpa = %f\n", ptr -> cgpa);
    printf("student -> name = %s\n", ptr -> name);
	return 0;
	
	
}
