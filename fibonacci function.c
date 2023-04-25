//Write a program to print the Fibonacci series using function
#include<stdio.h>
int fbnc(int a);
int main()
{
	int x,y;
	printf("enter the number of terms in fibonacci series:-");
	scanf("%d",&x);
	y=fbnc(x);
	return 0;
}
int fbnc(int n)
{
	int i,n1=0,n2=1,n3;
	printf("\n%d %d",n1,n2);
	for(i=2;i<n;i++)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;	
	}
	return;
}
