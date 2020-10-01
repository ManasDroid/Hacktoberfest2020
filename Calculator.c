#include<stdio.h>
int main()
{
	float first, second;
	char operate,choice = 'Y';
		printf("Enter operator(+,-,*,/): ");
		scanf("%c",&operate);
		printf("Enter First number: ");
		scanf("%f",&first);
		
		printf("Enter Second number: ");
		scanf("%f",&second);
		if(operate == '+')
			printf("%f",first+second);
		else if(operate == '-')
			printf("%f",first-second);
		else if(operate == '*')
			printf("%f",first*second);
		else if(operate == '/')
			printf("%f",first/second);		
		else
			printf("Invalid!");
	return 0;
}

