#include <stdio.h>
 
int main()

{
    int  num, binary_val, decimal_val = 0, base = 1, rem,hexadecimalval = 0, i = 1;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); /* maximum five digits */
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
 
    while (binary_val != 0)
    {
        rem= binary_val % 10;
        hexadecimalval = hexadecimalval + rem*i;
        i = i * 2;
        binary_val = binary_val / 10;
    }
    printf("Its hexadecimal equivalent is = %lX", hexadecimalval);
    return 0;
}
