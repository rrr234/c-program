#include<stdio.h>
int calculatePercentage (int science, int math, int sanskrit);
int main()
{
	int science = 98;
	int math = 99;
	int sanskrit = 95;
	
	printf("percentage is : %d", calculatePercentage(science, math, sanskrit));
	return 0;
}
calculatePercentage(int science, int math, int sanskrit){
	return ((science + math + sanskrit) / 3);
}
