
/* C program to list prime numbers between an interval using function.
 * main.c
 * Created on 2/10/2024
 * Author: Shaimaa
 */

#include <stdio.h>

int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, upperLimit;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &lowerLimit, &upperLimit);
    printPrimes(lowerLimit, upperLimit);

    return 0;
}


void printPrimes(int lowerLimit, int upperLimit)
{
    printf("Prime numberS between %d and %d are: ", lowerLimit, upperLimit);

    while(lowerLimit <= upperLimit)
    {
        if(isPrime(lowerLimit))
        {
            printf("%d ", lowerLimit);
        }

        lowerLimit++;
    }
}

int isPrime(int num)
{
    int i;

    for(i=2; i<=num/2; i++)
    {

        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
