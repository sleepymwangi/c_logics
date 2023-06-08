#include "main.h"


int main() {
    int num = 42;
    float floatNum = 3.14;
    double doubleNum = 1.234567;

    my_printf("Number: %d\n", num);
    my_printf("Float Number: %f\n", floatNum);
    my_printf("Double Number: %lf\n", doubleNum);

    my_printf("This is a %% special character.\n");
    my_printf("This is a new line: %n");
    my_printf("This is another %% special character.\n");

    return 0;
}
