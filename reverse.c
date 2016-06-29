#include<stdio.h>
#include<conio.h>
void main()
{
int n,reverseno=0,remain=0;
printf("Enter an integer:");
scanf("%d",&n);
while(n!=0)
{
remain=n%10;
reverseno=reverseno*10+remain;
n/=10;
}
printf("reverseno=%d",reverseno);
getch();
}
