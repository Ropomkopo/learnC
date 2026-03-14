#include "calculator_logic_v1.h"
#include <stdio.h>

CalcResult calculate(double a, double b, char op) {
  CalcResult result = {0.0, SUCCESS};

  switch (op) {
  case '+':
    result.value = a + b;
    break;
  case '-':
    result.value = a - b;
    break;
  case '*':
    result.value = a * b;
    break;
  case '/':
    if (b == 0) {
      result.status = ERROR_DIVISION_BY_ZERO;
    } else {
      result.value = a / b;
    }
    break;
  case '%':
    result.value = (int)a % (int)b;
    break;
  case '^':
    result.value = a * a * a;
    break;
  default:
    result.status = ERROR_INVALID_OPERATOR;
    break;
  }

  return result;
}

void print_error(CalcError error) {
  switch (error) {
  case ERROR_DIVISION_BY_ZERO:
    printf("Error: Division by zero is not allowed.\n");
    break;
  case ERROR_INVALID_OPERATOR:
    printf("Error: Invalid operator entered.\n");
    break;
  case ERROR_UNKNOWN:
    printf("Error: An unknown error occurred.\n");
    break;
  default:
    break;
  }
}