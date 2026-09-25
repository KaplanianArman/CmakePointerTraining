#include "strcmp.h"

int strcmp(const char* fst, const char* sec) {
    /*
    вернет отрицательное число, если fst < sec
    вернет 0, если fst == sec
    вернет положительное число, если fst > sec
    */
    while (*fst == *sec && *fst != '\0') {
        fst++;
        sec++;
    }
    return fst - sec;
}