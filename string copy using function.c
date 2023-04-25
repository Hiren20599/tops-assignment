//Write a program to copy string from one string to another string with user define function.
#include<stdio.h>
#include<string.h>
void copy(char b[20],char a[20]);
int main()
{
	char str1[20],str2[20];
	printf("Enter source string: \n");    
    scanf("%s",&str1);
	copy(str2,str1);
	printf("Coied string is = %s",str2);
	return 0;
}
void copy(char b[20],char a[20])
{
	int i;
 	for(i=0;a[i]!='\0';i++)
 	{
  	b[i] = a[i];
 	}
 	b[i] = '\0';
	return;
}




