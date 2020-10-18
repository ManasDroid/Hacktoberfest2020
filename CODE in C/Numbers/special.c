#include<stdio.h>
#include<conio.h>
 main()
 {
     int temp,n,fact,num,sum=0,i;
     printf("%d",&num);
     temp=num;
     sum=0;
     while(temp>0)
     {
         n=temp%10;
         fact=1;
         for(i=1;i<=n;i++)
         {
             fact=fact*i;
             sum=sum+fact;
             temp=temp/10;
         }
         if(sum==num)
         {
             printf("\n special number");
         }
         else
         {
             printf("\n not a special number");
         }
         getch();
     }
 }