#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define MAX_CHAR 100

int main(void)
{
    char *locale_name="Korean_Korea.949";
    struct lconv *locale_struct;

    setlocale(LC_ALL, locale_name);
    locale_struct=localeconv();

    printf("decimal_point = \"%s\"\n", locale_struct->decimal_point);
    printf("thousands_sep = \"%s\"\n", locale_struct->thousands_sep);
    printf("grouping = %s\n", locale_struct->grouping);
    printf("mon_decimal_point = \"%s\"\n", locale_struct->mon_decimal_point);
    printf("mon_thousands_sep = \"%s\"\n", locale_struct->mon_thousands_sep);
    printf("mon_grouping = %s\n", locale_struct->mon_grouping);
    printf("positive_sign = \"%s\"\n", locale_struct->positive_sign);
    printf("negative_sign = \"%s\"\n", locale_struct->negative_sign);
    printf("currency_symbol = \"%s\"\n", locale_struct->currency_symbol);
    printf("frac_digits = %c\n", locale_struct->frac_digits);
    printf("p_cs_precedes = %c\n", locale_struct->p_cs_precedes);
    printf("n_cs_precedes = %c\n", locale_struct->n_cs_precedes);
    printf("p_sep_by_space = %c\n", locale_struct->p_sep_by_space);
    printf("n_sep_by_space = %c\n", locale_struct->n_sep_by_space);
    printf("p_sign_posn = %c\n", locale_struct->p_sign_posn);
    printf("n_sign_posn = %c\n", locale_struct->n_sign_posn);
    printf("int_curr_symbol = \"%s\"\n", locale_struct->int_curr_symbol);
    printf("int_frac_digits = %c\n", locale_struct->int_frac_digits);

    return 0;
}
