#include<stdio.h>
#include<math.h>

int main()
{
	int num1,num2,num3;
	
	
	printf("Welcome to Addition world");
	
	//function to print the output
	
	printf("Enter all the three numbers:");
	scanf("%d %d %d \n",&num1,&num2,&num3);
	
	int avg = (num1+num2+num3)/3;
	
	printf("Average of three numbers is: %d",avg);
	
	return 0;
}
