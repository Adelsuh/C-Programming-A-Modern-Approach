#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
  int i, j, low_rate, num_years, year;
  double value[5];

  printf("Enter monthly interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
    printf("%3d    ", year);
    for (i = 0, j=0; i < NUM_RATES;) {
      value[i] += (low_rate + i) / 100.0 * value[i];
      ++j;
      if (j%12==0) {printf("%8.2f", value[i]); i++;}
    }
    printf("\n");
  }

  return 0;
}
