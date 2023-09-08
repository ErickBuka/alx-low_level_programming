#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of the multiplication.
 */
unsigned long int multiply(char *num1, char *num2)
{
    unsigned long int result = 0;

    while (*num1)
    {
        int digit1 = *num1 - '0';
        int carry = 0;
        char *ptr2 = num2;
        char temp[1024] = {0}; /*Assuming a maximum length of 1024 for temporary storage*/
        char *ptr_temp = temp;

        while (*ptr2 || carry)
        {
            int digit2 = (ptr2[0]) ? *ptr2 - '0' : 0;
            int product = (digit1 * digit2) + carry + (*ptr_temp - '0');

            carry = product / 10;
            *ptr_temp = (product % 10) + '0';
            ptr2++;
            ptr_temp++;
        }

        while (*ptr_temp)
        {
            *num1 = *ptr_temp;
            ptr_temp++;
            num1++;
        }

        result++;
    }

    return result;
}



int main(int argc, char *argv[])
{
    unsigned long int result;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    result = multiply(argv[1], argv[2]);

    printf("%lu\n", result);

    return 0;
}
