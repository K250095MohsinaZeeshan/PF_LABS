#include <stdio.h>

int main() {
    int intNumber;

    printf("\"INTEGERS AND THEIR EQUIVALENT ASCII CHARACTERS\"\n");
	printf("\nEnter an integer (between 65 and 90): ");
    scanf("%d", & intNumber);

    if (intNumber >= 65 && intNumber <= 90) {
        printf("\n%d = %c\n", intNumber, (char) intNumber);
        printf("\nThat is your ASCII Character for the entered integer.\n");
    } 
	else 
	{
        printf("\nInvalid input.Please make sure to enter a number between 65 and 90.\n");
    }

    return 0;
}

