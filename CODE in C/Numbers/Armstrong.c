#include<stdio.h>
int main(){
	
	int n,d=0;
	int s=0;
	
	printf("Enter a Number\n");
	scanf("%d",&n);
	
	int z = n;
	while(n > 0){
		
		d = n %10;
		s+= d*d*d;
		n/=10;
		
	}
	
	if(s==z)
		printf("It is an Armstrong number");
	else
		printf("It is not an Armstrong number");
		
	return 0;
}
