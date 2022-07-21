//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
	int d,n,s=0;
	printf("Please Enter 3-digit number: ",n);
	scanf("%d",&n);
	d=n%10;
	s=s+d;
	d=n/10;
	d=d%10;
	s=s+d;
	d=n/100;
	s=s+d;
	printf("Sum of digits of number %03d is %d: ",n,s);
	return 0;
}
