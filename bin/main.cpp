#include <iostream>
#include <cstring>
#include <cstddef>
#include "strcmp.h"
#include "strcopy.h"
#include "strstr.h"
#include "strlen.h"

const size_t BUFF_SIZE = 100;

int main() {
    const char* ptr1 = "Hello";
    const char* ptr2 = ", world!";
    const char* ptr3 = "Hello, world!";
    char buf1[BUFF_SIZE];
    char buf2[BUFF_SIZE];

    //тестим StrCmp
    std::cout << "StrCmp\n";
    std::cout << StrCmp(ptr1, ptr2) << ' ' << strcmp(ptr1, ptr2) << ' ' << 'H' - ',' << '\n';
    std::cout << StrCmp(ptr2, ptr1) << ' ' << strcmp(ptr2, ptr1) << ' ' << ',' - 'H' << '\n';
    std::cout << StrCmp(ptr1, "Hello") << ' ' << strcmp(ptr1, "Hello") << ' ' << 'H' - 'H' << "\n\n";

    //тестим StrCopy и StrLen
    std::cout << "StrCopy and StrLen\n";
    char* ptr_on_buf1 = StrCopy(ptr1, buf1, sizeof(buf1));
    std::cout << ptr_on_buf1 << '\n';
    StrCopy(ptr2, buf1 + StrLen(ptr1), sizeof(buf1));
    std::cout << ptr_on_buf1 << '\n';
    std::cout << ptr_on_buf1 + StrLen(ptr1) << '\n';

    char* ptr_on_buf2 = strcpy(buf2, ptr1);
    std::cout << ptr_on_buf2 << '\n';
    strcpy(buf2 + strlen(ptr1), ptr2);
    std::cout << ptr_on_buf2 << '\n';
    std::cout << ptr_on_buf2 + strlen(ptr1) << "\n\n";

    //тестим StrStr
    std::cout << "StrStr\n";
    const char* ptr4 = ", world";
    const char* ptr5 = "Hello, world";
    const char* res1 = StrStr(ptr5, ptr2);
    if (nullptr != res1) {
        std::cout << res1 << '\n';
    }
    else {
        std::cout << "res1 = nullptr\n"; 
    }
    const char* res2 = StrStr(ptr3, ptr4);
    if (nullptr != res2) {
        std::cout << res2 << '\n';
    }
    else {
        std::cout << "res2 = nullptr\n"; 
    }

    const char* res3 = strstr(ptr5, ptr2);
    const char* res4 = strstr(ptr3, ptr4);
    if (nullptr != res3) {
        std::cout << res3 << '\n';
    }
    else {
        std::cout << "res3 = nullptr\n"; 
    }
    if (nullptr != res4) {
        std::cout << res4 << '\n';
    }
    else {
        std::cout << "res4 = nullptr\n"; 
    }
    return 0;
}