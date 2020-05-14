#include <stdio.h>
#include <string.h>

int main(void) {
    printf("%ld", sizeof(char));
    puts("");
    printf("%ld", sizeof(char) * 8);

    return 0;
}