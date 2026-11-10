#include <stdio.h>
int rec(int a) {
    if(a <= 1) {
        return 1;
    } else {
        return a + rec(a - 1);
    }
}
int main(void) {
    int a;
    while(scanf("%d", &a)==1) {
        int tr = (a * (a + 1)) / 2;
        printf("%d\n", tr);
    }
    int b;
    while(scanf("%d", &b)==1) {
        printf("%d\n", rec(b));
    }
    return 0;
}