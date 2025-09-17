#include<stdio.h>
int main()
{
    float baseSalary,hRa,dA,grossSalary;
	printf("\tGROSS SALARY CALCULATOR OF AN EMOPLOYEE\n");
	printf("\t_______________________________________\n");
	
	printf("\nPlease Enter the basic salary you earn from the company:");
	scanf("%f", &baseSalary);
	
	hRa = 0.10 * baseSalary;
	dA = 0.05 * baseSalary;
	grossSalary = baseSalary + hRa +dA;
	
	printf("\n->The House Rental Allowance based on your salary is: %.2f \n",hRa);
	printf("\n->The Dearness Allowance based on your salary is:%.2f\n", dA);
	
	printf("\n->Your Gross Salary will be: %.2f\n" , grossSalary);
	
	
 return 0;	
}

