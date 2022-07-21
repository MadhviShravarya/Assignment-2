//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter a number: ",a);
	scanf("%d",&a);
	i=a/10;
	printf("number without its last digit is %d ",i);
	return 0;
}
