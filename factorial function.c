//Write a program to find out the factorial of given number using function.
#include<stdio.h>
int fact(int n);
int main()
{
	int num,i,fac=1;
	printf("enter the number: ");
	scanf("%d",&num);	
	printf("The factorial of %d is = %d! = %d ",num,num,fact(num));
}
int fact(int n)
{
	int i,fac=1;
	for(i=1;i<=n;i++)
	{
		fac=fac*i;		
	}
	return fac;
}
