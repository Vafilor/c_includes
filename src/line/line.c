#include "src/line/line.h"

int line_value(double x, double slope, double y_intercept) {
    return slope * x + y_intercept;
}