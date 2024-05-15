//Binary Subtraction
#include<stdio.h>
void binarySubtraction(long binary1, long binary2);
int main() 
{
    long binary1, binary2;
    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);
    binarySubtraction(binary1, binary2);   
    return 0;
}
void binarySubtraction(long binary1, long binary2) 
{
    int j, borrow = 0;
    int diff[20], i = 0;
    while (binary1 != 0 || binary2 != 0) 
	{
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;
        int subtractedBit = bit1 - bit2 - borrow;
        if (subtractedBit < 0) 
		{
            subtractedBit += 2;
            borrow = 1;
        } 
		else 
		{
            borrow = 0;
        }
        diff[i++] = subtractedBit;
        binary1 /= 10;
        binary2 /= 10;
    }
    while (i > 0 && diff[i - 1] == 0) 
	{
        i--;
    }
    printf("Difference of two binary numbers is ");
    if (i == 0) 
	{
        printf("0");
    } 
	else 
	{
        for (j = i - 1; j >= 0; j--) 
		{
            printf("%d", diff[j]);
        }
    }
}
