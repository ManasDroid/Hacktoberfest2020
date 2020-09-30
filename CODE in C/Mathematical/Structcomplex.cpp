#include<stdio.h>
struct complex 
{
	float real, img;
};
int main()
{
	struct complex c1,c2,c3;
	c1.real=2.5;
	c1.img=4;
	printf("Enter 2nd complex number:");
	scanf("%f%f",&c2.real,&c2.img);
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	printf("Addition=%f+%fi",c3.real,c3.img);
	return 0;
}
