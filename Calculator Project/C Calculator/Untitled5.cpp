#include <stdio.h>
#include <math.h>
#define MAX 1000


int main()
{
    char binarynum[MAX], hex[MAX];
    long int i = 0;
    int dec, j, ch, p;
	i = 0;
	p=0;
	dec=0;

 
    printf("Enter the value for hexadecimal ");
    scanf("%s", hex);
    printf("The Hexadecimal number is = %s \n",hex);
    printf("\nIts Binary equivalent is:  ");
    while (hex[i])
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
            return 0;
        }
        i++;
    }
	
	while ((ch=getchar()) != '\n') 
	{
	if ((ch > 47 && ch < 58) || (ch > 64 && ch < 71))
	hex[i++] = ch;
	}
	
	for (j = i-1; j >= 0; j-- ) 
	{
	if (hex[j] > 57)
	dec +=  (hex[j] - 55) * (int)pow((double)16, p);
	else
	dec +=  (hex[j] - 48) * (int)pow((double)16, p);
	
	p++;
	
	}
	
	printf("\n Its Decimal equivalent is: %d", dec);
	printf("\n\nPress any key to continue...");
	getchar();
 
	
	return 0;
}
