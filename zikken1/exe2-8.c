#include <stdio.h>
#include <string.h>

int main(void) {
    char ibaraki[10] = "ibaraki";
    int str_len = strlen(ibaraki) - 1;
    int i;

    for (i=0; i<=str_len; i++) {
        printf("%c", ibaraki[i]);
        printf("/");
    }

    return 0;
}