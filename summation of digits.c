#include<stdio.h>
//w.a.p to make summation of digits of given number.
int main()
{
	int n,i,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		sum=sum+n%10;//for reminder and addition
		n=n/10;		
	}
	printf("\nThe summation of digits of above number is = %d",sum);
	return 0;
}
