//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD
#include<stdio.h>
int main()
{
	float i,u;
	printf("Enter the amount of INR: ");
	scanf("%f",&i);
	u=i/76.23;
	printf("the amount of INR in USD is %f ",u);
	return 0;	
}
