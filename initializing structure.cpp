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
	printf("student cgpa = %f\n", s1.cgpa);
	printf("student name = %s\n", s1.name);
	return 0;
	
	
}
