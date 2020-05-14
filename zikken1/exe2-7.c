#include <stdio.h>
#include <string.h>

int main(void) {
    char my_name[30] = "YugeHayata";
    int str_len = strlen(my_name) - 1;

    while (str_len >= 0) {
        printf("%c", my_name[str_len]);
        str_len--;
    }

    printf("\n");

    return 0;
}