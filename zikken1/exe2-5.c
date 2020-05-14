#include <stdio.h>
int main(void) {
    char scan_s[10];
    scanf("%s", scan_s);

    if (scan_s[0] == "A" || scan_s[0] == "B" || scan_s[0] == "C") {
        printf("正解です");
    } else {
        printf("誤りです");
    }

    return 0;
}