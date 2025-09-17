#include<stdio.h>
int main()
{
	int marks1,marks2,marks3,total;
	float percentage;
	
	printf("\n****TOTAL AND PERCENTAGE CALCULATOR****\n");
	printf("\n 1) Enter the marks of first subject (out of 100):\t");
	scanf("%d" , &marks1);
	
	printf("\n 2) Enter the marks of second subject (out of 100):\t");
	scanf("%d", &marks2);
	
	printf("\n 3) Enter the marks of third subject (out of 100):\t");
	scanf("%d", &marks3);
	
	total=(marks1+marks2+marks3);
	percentage= (total/300.00f) *100;
	printf("\n-> The total marks of three subjects is:   %d \n", total );
	printf("\n-> The percentage of three subjects is: %.2f%% \t", percentage );
	
	return 0;
	
}
