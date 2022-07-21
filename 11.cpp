//Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
#include<stdio.h>
int main()
{
	int n,d;
	printf("enter a number ");
	scanf("%d",&n);
	printf("enter a digit ");
	scanf("%d",&d);
	n=n*10;
	n=n+d;
	printf("after appending, the result is %d",n);
	return 0;
}
