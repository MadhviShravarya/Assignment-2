//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right
#include<stdio.h>
int main()
{
	int a;
	printf("enter three digit number: ");
	scanf("%d",&a);
	printf("%d",a>>1);
	return 0;
	
}
