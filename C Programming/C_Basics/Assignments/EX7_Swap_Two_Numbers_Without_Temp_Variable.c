#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two integers\n");
    scanf("%d %d", &num1, &num2);

    num1 = num1 +  num2;
    num2 = num1 -  num2;
    num1 = num1 -  num2;
    printf("After Swapping\nnum1 = %d\nnum2 = %d\n", num1, num2);
    return 0;
}
