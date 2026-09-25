#include "strlen.h"
#include <cstddef>

size_t StrLen(const char* str) {
    size_t i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}