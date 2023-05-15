#include <stdio.h>
#include <string.h>

int main() {
  int original, sum, check_digit, new_number;
  char str_original[5], str_new_number[6];

  // Step 1: Get input
  printf("Enter a four-digit number: ");
  scanf("%d", &original);

  // Step 2: Calculate sum of digits
  sum = (original / 1000) + ((original / 100) % 10) + ((original / 10) % 10) + (original % 10);

  // Step 3: Determine check digit
  if (sum % 2 == 0) {
    check_digit = 0;
  } else {
    check_digit = 1;
  }

  // Step 4: Add check digit to original number
  new_number = original * 10 + check_digit;

  // Step 5: Convert original and new number to strings
  sprintf(str_original, "%d", original);
  sprintf(str_new_number, "%d", new_number);

  // Step 6: Print original and new number
  printf("Original number: %s\n", str_original);
  printf("New number: %s\n", str_new_number);

  // Step 7: Test with additional data
  int test1 = 47371;
  int test2 = 4631;

  printf("Test 1:\n");
  original = test1;
  sum = (original / 1000) + ((original / 100) % 10) + ((original / 10) % 10) + (original % 10);
  if (sum % 2 == 0) {
    check_digit = 0;
  } else {
    check_digit = 1;
  }
  new_number = original * 10 + check_digit;
  sprintf(str_original, "%d", original);
  sprintf(str_new_number, "%d", new_number);
  printf("Original number: %s\n", str_original);
  printf("New number: %s\n", str_new_number);

  printf("Test 2:\n");
  original = test2;
  sum = (original / 1000) + ((original / 100) % 10) + ((original / 10) % 10) + (original % 10);
  if (sum % 2 == 0) {
    check_digit = 0;
  } else {
    check_digit = 1;
  }
  new_number = original * 10 + check_digit;
  sprintf(str_original, "%d", original);
  sprintf(str_new_number, "%d", new_number);
  printf("Original number: %s\n", str_original);
  printf("New number: %s\n", str_new_number);

  return 0;
}
