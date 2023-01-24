#include "dhbw.h"

#include <stdio.h>

void dhbw_print_integer(const char* description, long long v) {
    printf("%s: %lli\n", description, v);
}

void dhbw_print_line(const char* text) {
    printf("%s\n", text);
}

void dhbw_print_float(const char* description, double v) {
    printf("%s: %.2lf\n", description, v);
}
