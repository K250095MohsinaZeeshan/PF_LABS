#include<stdio.h>
int main()
{
	int a,b,secVar;
	printf("\"PROGRAM FOR SWAPPING THE VALUES OF VARIABLES(only integer values)\"\n");
	printf("\n--> Enter the value for a: ");
	scanf("%d", &a);
	
	printf("\n--> Enter the value for b: ");
	scanf("%d", &b);
	
	secVar = a; //secVar=Secondary Variable
	a=b;
	b= secVar;
	
	printf("\nAfter swapping, the value for 'a' and 'b'is: \n");
	printf("\n a = %d \n", a);
	printf("\n b = %d \n", b);
	return 0;
}
