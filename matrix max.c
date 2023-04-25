//Write a program to find out the Max number from given Matrix.
#include<stdio.h>
int main()
{
	int i,j,mat[3][3],max=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the elementa of matrix: ");
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nYour matrix is:--\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mat[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(mat[i][j]>max)
		max=mat[i][j];
		}
	}
	printf("\nThe maximum value from above matrix is = %d",max);
	return 0;
}
