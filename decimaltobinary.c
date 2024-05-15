//WAP in C language to convert decimal to binary number.
#include<stdio.h>
#include<math.h>
long DecimalToBinary(int decimalnum)
{
	long binarynum=0;
	int temp=1,remainder;
	while(decimalnum!=0)
	{
		remainder=decimalnum%2;
		decimalnum=decimalnum/2;
		binarynum=binarynum+remainder*temp;
		temp=temp*10;
	}
	return binarynum;
}
int main()
{
	int decimalnum;
	printf("Enter a decimal number: ");
	scanf("%d",&decimalnum);
	printf("Equivalent binary number is %d",DecimalToBinary(decimalnum));
	return 0;
}
