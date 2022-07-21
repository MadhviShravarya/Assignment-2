//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter a number: ",a);
	scanf("%d",&a);
	i=a%10;
	printf("Unit digit of %d is %d ",a,i);
	return 0;
}
