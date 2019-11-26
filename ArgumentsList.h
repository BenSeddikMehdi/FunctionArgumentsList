//
// Created by HP-EliteBook on 11/26/2019.
//

#ifndef FUNCTIONARGUMENTSLIST_ARGUMENTSLIST_H
#define FUNCTIONARGUMENTSLIST_ARGUMENTSLIST_H
#include <stdarg.h>
void print_ints(int num, ...) {
    va_list args;
    va_start(args, num);
    for (int i = 0; i < num; ++i) {
        int value = va_arg(args, int);
        printf("%d : %d\n", i, value);
    }
    va_end(args);
}
#endif //FUNCTIONARGUMENTSLIST_ARGUMENTSLIST_H
