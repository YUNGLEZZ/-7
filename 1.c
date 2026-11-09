// зачетка 111260343\ъ
#include <stdio.h>
#include <ctype.h>
int main(void) {
    char a, b;
    while((a = getchar()) != EOF) {
        if(islower(a)) {
            b = (char)toupper(a);
            putchar(b);
        } else {
            putchar(a);
        }
    }
    return 0;
}