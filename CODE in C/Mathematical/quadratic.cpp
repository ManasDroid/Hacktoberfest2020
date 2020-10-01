#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float a,b,c,d,r1,r2,real,img;
	printf("Enter the coefficients a,b,c \n");
	scanf("%f%f%f",&a,&b,&c);
	
	if (a==0 && b==0){
		printf("Invalid \n");
	}
	else if (a==0){
		printf("Linear equation \n");
		r1=-c/b;
		printf("Root is %.3f \n", r1);
	}
	else {
		d=(b*b)-(4*a*c);
	
	if(d==0){
		printf("Roots are real and equal \n");
		r1=r2=-b/(2*a);
		printf("Roots are %.3f \n", r1);
	}
	else if (d>0){
		printf("Roots are real and distinct \n");
		r1=(-b+sqrt(d)/(2*a));
		r2=(-b-sqrt(d)/(2*a));
		printf("Root 1 is %.3f\n", r1);
		printf("Root 2 is %.3f\n", r2);
	}
	else {
		printf("Roots are imaginary and distinct \n ");
		real=-b/(2*a);
		img=sqrt(fabs(d))/(2*a);
		printf("Root 1= %.2f+i%.3f \n", real,img);
		printf("Root 2= %.2f-i%.3f \n", real,img);
		exit(1);
	}
	
	}
	
	
}
