#include <stdio.h>
#include <string.h>

int main(void) {
    char ibaraki[10] = "ibaraki";
    int str_len = strlen(ibaraki) - 1;
    int i = 0;

    while (i <= str_len) {
        printf("%c", ibaraki[i]);
        printf("/");
        i++;
    }

    return 0;
}