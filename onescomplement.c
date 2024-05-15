//WAP in C language to compute one's complement of a 4-bit binary number.
#include<stdio.h>
#define SIZE 4
int main()
{
	char binary[SIZE+1],onesComp[SIZE+1];
	int i, error=0;
	printf("Enter %d bit binary value: ",SIZE);
	/*Input binary string from user*/
	gets(binary);
	/*store all inverted bits of binary value to one's complement*/
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
			error=1;
			/*Exits from loop*/
			break;
		}
	}
	/*Marks the end of one's complement string*/
	onesComp[SIZE]='\0';
	/*Check if there are binary string contains no errors*/
	if(error==0)
	{
		printf("Original binary = %s\n",binary);
		printf("One's Complement = %s",onesComp);
	}
	return 0;
}
