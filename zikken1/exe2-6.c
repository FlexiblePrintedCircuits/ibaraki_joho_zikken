#include <stdio.h>
#include <string.h>

int main(void) {
    char my_name[30] = "YugeHayata";
    int str_len = strlen(my_name) - 1;
    int i;

    for (i=str_len; i>=0; i--) {
        printf("%c", my_name[i]);
    }

    printf("\n");

    return 0;
}