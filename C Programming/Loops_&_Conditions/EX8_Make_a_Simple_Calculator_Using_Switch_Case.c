
#include <stdio.h>

int main()
{
  char op;
  float first, second;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  printf("Enter two operands: \n");
  scanf("%f %f", &first, &second);

  switch (op)
  {
    case '+':
      printf("%.1f + %.1f = %.1f", first, second, first + second);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", first, second, first - second);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", first, second, first * second);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", first, second, first / second);
      break;

    default:
      printf("Error! operator is not correct");
  }
  return 0;
}
