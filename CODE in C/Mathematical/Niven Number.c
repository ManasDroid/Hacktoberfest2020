#include<stdio.h>

/*
	A number is called Niven Number 
	if the sum of its digits divides the
	number without any remainder.
*/

int main(){
	
	int number, sum = 0, temp = 0;
	scanf("%d", &number);

	temp = number;
	while(temp){
		sum += temp%10;
		temp /= 10;
	}
	
	if(number != 0 && number % sum == 0){
		printf("%d is a Niven Number\n", number);
	}
	else {
		printf("%d is not a Niven Number\n", number);
	}

	return 0;

}