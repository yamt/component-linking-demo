#include <stdint.h>
#include <stdio.h>
#include "bar.h"

int32_t exports_test_test_test_bar(int32_t arg) {
    printf("hello, world!\n");
    return test_test_test_bar(arg + 73);
}
