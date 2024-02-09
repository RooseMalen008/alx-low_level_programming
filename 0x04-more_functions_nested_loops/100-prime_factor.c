#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
    long i;

    while (n % 2 == 0)
    {
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }

    if (n > 2)
        return n;
    else
        return 2;
}

int main(void)
{
    long number = 612852475143;
    long result = largest_prime_factor(number);

    printf("%ld\n", result);

    return 0;
}
