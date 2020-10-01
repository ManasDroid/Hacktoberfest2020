#include<stdio.h>
int main(){
	
	int n,d=0;
	int sum=0;
	
	printf("Enter the Number to be checked \n");
	scanf("%d",&n);
	
	int z = n;
	while(n > 0){
		
		d = n %10;
		sum+= d*d*d;
		n/=10;
		
	}
	
	if(sum==z)
		printf("%d is an Armstrong number",sum);
	else
		printf("%d is not an Armstrong number",sum);
		
	return 0;
}
