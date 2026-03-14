#include "calculator_logic_v1.h"
#include <stdio.h>

int main() {
  double num1, num2;
  char operation;

  printf("=== C Modular Calculator ===\n");
  printf("Enter calculation (e.g., 10 + 5):\n");

  if (scanf("%lf %c %lf", &num1, &operation, &num2) != 3) {
    printf(
        "Error: Invalid input format. Please use 'number operator number'.\n");
    return 1;
  }

  CalcResult result = calculate(num1, num2, operation);

  if (result.status == SUCCESS) {
    printf("Result: %.2f\n", result.value);
  } else {
    print_error(result.status);
  }

  return 0;
}