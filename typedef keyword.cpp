#include<stdio.h>
#include<string.h>

typedef struct computerengineeringstudent {
	int roll;
	float cgpa;
	char name[100];
} coe;

int main() {
    coe s1;
    s1.roll = 1637;
    s1.cgpa = 6.8;
    strcpy(s1.name, "divyansh");
    
    printf("student name is %s\n", s1.name);
	return 0;
}
