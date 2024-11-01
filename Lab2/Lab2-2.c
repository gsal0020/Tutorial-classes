#include <stdio.h>

int main() {
  int weight; 
  int value;
  printf("Enter your weight in pounds: \n");
  scanf("%d", &weight);
  // Platinum is $1770 / pound
  // 14.5 troy ounces in 1 pound
  value = 1770.0 * weight * 14.5;
  printf ("Your weight in platinum costs $%.4d. \n", value);//when using %d 4234725 while %f returns 165.0000
  printf("Printing character : %c\n ", value);
  printf("printing characters in octal: %#o\n",weight );
  printf("printing characters in hex: %#x\n", weight);//changed weight to int to test conversion quicker.

} //$42347525.00
// when character is being used it is returing an unkown char.
