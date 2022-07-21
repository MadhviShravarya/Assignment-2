//Write a program to check whether the given number is even or odd using a bitwise operator
#include<stdio.h>
int main()
{
	int x;
	printf("enter a number: ",x);
	scanf("%d",&x);
	if(x&1)
	{
		printf(" %d is odd number",x);
	}
	else
	printf("%d is even number",x);
	return 0;
}
