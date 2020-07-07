#include <stdio.h>
#include <locale.h>

int main()
{
    char *c_locale, *native_locale;

    c_locale=setlocale(LC_ALL, "C");
    native_locale=setlocale(LC_ALL, "");

    printf("c_locale: %s\n", c_locale);
    printf("native_locale: %s\n", native_locale);

    if (c_locale==native_locale) printf("The native local is the same as the C locale.\n");
    else printf("The native locale is different from the C locale.\n");

    return 0;
}
