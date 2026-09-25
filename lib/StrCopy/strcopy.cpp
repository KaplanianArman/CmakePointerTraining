#include <cstddef>
#include "strcopy.h"

char* strcopy(const char* from, char* to, size_t n) {
    //записывает from в to
    char* start = to;
    size_t i = 0;
    while (i < n && ((*to = *from) != '\0')) {
        to++;
        from++;
        i++;
    }
    return start;
}