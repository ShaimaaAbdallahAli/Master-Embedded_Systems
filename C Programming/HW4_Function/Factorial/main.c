/*
 * C Program to calculate Factorial of Numbers Using Recursion
 * Created on 2/10/2024
 * Author:Shaimaa
 */

#include <stdio.h>
long long int Factorial(int num);
int main()
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d" , &num);
    printf("Factorial of %d = %lld" , num , Factorial(num));

    return 0;
}

long long int Factorial(int num)
{
   if(num==0)
   {
     return 1;
   }
   else
   {
       return(num*Factorial(num-1));
   }

}
