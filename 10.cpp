//Write a program to make the last digit of a number stored in a variable as zero
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	n=n/10;
	i=n*10;
	printf("the output is %d",i);
	return 0;
}
