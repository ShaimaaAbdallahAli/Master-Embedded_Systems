#include <stdio.h>

int main() {
    double a , b , c;
    printf("Enter three numbers:\n");
    scanf("%lf %lf %lf", &a, &b, &c);


    if (a >= b && a >= c)
         printf("%.2lf is the largest number.", a);
    else if (b >= a && b >= c)
         printf("%.2lf is the largest number.", b);
    else
         printf("%.2lf is the largest number.", c);

    return 0;
}
