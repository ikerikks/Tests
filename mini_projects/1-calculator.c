#include <stdio.h>

int main() {

  char operator;
  double num1, num2 = 0;
  double result = 0;
  
  printf("Choose an operator ['+', '-', '/', '*'] : ");
  scanf("%c", &operator);
  printf("Enter first number : ");
  scanf("%lf", &num1);
  printf("Enter second number : ");
  scanf("%lf", &num2);

  switch(operator) {
  case '+':
    result = num1 + num2;
    break;

  case '-':
    result = num1 - num2;
    break;

  case '/':
    result = num1 / num2;
    break;

  case '*':
    result = num1 * num2;
    break;

  default:
    printf("Invalid input");
  }
  
  printf("%.2lf\n", result);


  return (0);
}
