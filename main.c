#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void)
{
    char *temp= readline("Enter temperature in celsius: ");
    double c = atof(temp);
    double f = (c*1.8 + 32);
    printf("%f° in Celsius is equivalent to %f° Fahrenheit. \n", c, f);

    return 0;
}