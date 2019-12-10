#include <stdio.h>
#include <math.h>


long long convertDecimalToBinary(int n);

int main()
{
    int n;
    long int remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];
	
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("The Decimal number is = %d \n", n);
    printf("Its Binary equivalent is = %lld \n ",convertDecimalToBinary(n));
    quotient = n;
	while(quotient!=0) 
	{
		temp = quotient % 16;
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("Its hexadecimal equivalent is = %c \n ", hexadecimalNumber[j] );
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexadecimalNumber[j]);
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
