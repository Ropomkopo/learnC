#ifndef CALCULATOR_LOGIC_H
#define CALCULATOR_LOGIC_H

/**
 * @enum CalcError
 * @brief Enum for handling various calculator error statuses.
 */
typedef enum {
  SUCCESS = 0,
  ERROR_DIVISION_BY_ZERO,
  ERROR_INVALID_OPERATOR,
  ERROR_UNKNOWN
} CalcError;

/**
 * @struct CalcResult
 * @brief Structure to store the result of an operation and its status.
 */
typedef struct {
  double value;
  CalcError status;
} CalcResult;

/**
 * @brief Performs arithmetic operations.
 * @param a First operand.
 * @param b Second operand.
 * @param op Operator character ('+', '-', '*', '/').
 * @return CalcResult containing the value and status.
 */
CalcResult calculate(double a, double b, char op);

/**
 * @brief Displays an error message based on the CalcError status.
 * @param error The error status to translate.
 */
void print_error(CalcError error);

#endif // CALCULATOR_LOGIC_H
