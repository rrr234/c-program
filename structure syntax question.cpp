#include<stdio.h>
#include<string.h>

// user defined
struct student {
	int roll;
	char name[100];
	float cgpa;
};
int main() {
	struct student s1;
	s1.roll = 1763;
	s1.cgpa = 9.6;
	strcpy(s1.name, "Divyansh saini");
	
	printf("student name = %s\n", s1.name);
	printf("student roll = %d\n", s1.roll);
	printf("student cgpa = %f\n", s1.cgpa);
	 
	
	struct student s2;
	s2.roll = 7265;
	s2.cgpa = 7.9;
	strcpy(s2.name, "elvish");
	
	printf("student name = %s\n", s2.name);
	printf("student roll = %d\n", s2.roll);
	printf("student cgpa = %f\n", s2.cgpa);
	return 0;
}
