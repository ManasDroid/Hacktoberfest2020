#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 100
int top=-1;
char stack[max];
char pop();
void push(char);
int main()
{
    char str[20];
   
    gets(str);//enter the string 

    for(int i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=pop();
    }
    printf("Reversed String : ");
    puts(str);


    return 0;
}
