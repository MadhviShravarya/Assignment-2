//Write a program to swap values of two int variables
//using third variable 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two values a and b repectively:\n",a,b);
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d and b=%d",a,b);
	return 0;
}
