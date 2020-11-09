#include <stdio.h>
#include "src/line/line.h"

int main() {
    double y = line_value(5.0, 6.0, 0);
    printf("Hello, world! %f\n", y);
    return 0;
}