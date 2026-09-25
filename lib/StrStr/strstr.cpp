#include "strstr.h"

const char* StrStr(const char* str, const char* sub) {
    for (int i = 0; str[i] != '\0'; ++i) {
        bool flag = true;
        for (int j = 0; sub[j] != '\0'; ++j) {
            if (str[i + j] != sub[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return str + i;
        }
    }
    return nullptr;
}