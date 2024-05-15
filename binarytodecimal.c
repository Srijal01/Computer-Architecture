//WAP in C language to convert binary to decimal number.
#include<stdio.h>
#include<math.h>
int BinaryToDecimal(int binarynum)
{
	int decimalnum=0, temp=0, remainder;
	while(binarynum!=0)
	{
		remainder=binarynum%10;
		binarynum=binarynum/10;
		decimalnum=decimalnum+remainder*pow(2,temp);
		temp++;
	}
	return decimalnum;
}
int main()
{
	long binarynum;
	printf("Enter a binary number: ");
	scanf("%ld",&binarynum);
	printf("Equivalent decimal number is %d",BinaryToDecimal(binarynum));
	return 0;
}
