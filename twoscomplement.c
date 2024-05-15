//WAP in C language to compute two's complement of a 4-bit binary number.
#include<stdio.h>
#define SIZE 4
int main()
{
	char binary[SIZE+1], onesComp[SIZE+1], twosComp[SIZE+1];
	int i, carry=1;
	printf("Enter %d bit binary value: ",SIZE);
	gets(binary);
	for(i=0;i<SIZE;i++)
	{
		if(binary[i]=='1')
		{
			onesComp[i]='0';
		}
		else if(binary[i]=='0')
		{
			onesComp[i]='1';
		}
		else
		{
			printf("Invalid input...");
		}
	}
	onesComp[SIZE]='\0';
	for(i=SIZE-1;i>=0;i--)
	{
		if(onesComp[i]=='1'&&carry==1)
		{
			twosComp[i]='0';
		}
		else if(onesComp[i]=='0'&&carry==1)
		{
			twosComp[i]='1';
			carry=0;
		}
		else
		{
			twosComp[i]=onesComp[i];
		}
	}
	twosComp[SIZE]='\0';
	printf("Original Binary Number = %s\n",binary);
	printf("One's Complement Number = %s\n",onesComp);
	printf("Two's Complement Number = %s\n",twosComp);
	return 0;
}
