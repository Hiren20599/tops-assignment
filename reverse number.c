#include<stdio.h>
int main()
{
	int n,i,rev=0,rem=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rev=rev*10;
		rem=n%10;
		rev=rev+rem;
		n=n/10;		
	}
	printf("\nThe reverse of above number is = %d",rev);
	return 0;
}
