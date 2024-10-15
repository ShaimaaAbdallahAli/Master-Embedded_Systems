/* C program to reverse a sentence using Recursion
 * main.c
 * Author : Shaimaa
 * Created on : 2/10/2024
 */
#include <stdio.h>

void reverseSentence();
int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
