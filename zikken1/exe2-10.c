#include <stdio.h>
#include <string.h>

int main(void) {
    char ibaraki[30] = "oiibkayrrawkqiykpoasjebn";
    int str_len = strlen(ibaraki) - 1;
    int i = 0;

    for (i=0; i<=str_len; i++) {
        if (i % 2 != 0) {
            printf("%c", ibaraki[i]);
        }
    }

    return 0;
}