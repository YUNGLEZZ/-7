#include <stdio.h>
int rec(int a) {
    if(a <= 1) {
        return 1;
    } else {
        return a + rec(a - 1);
    }
}
int iter(int a) {
    int sum = 0;
    for(int i = 0; i <= a; i++) {
        sum += i;
    } 
    return sum;
}
int main(void) {
    int a;
    while(scanf("%d", &a)==1) {
        printf("%d\n", iter(a));
    }
    int b;
    while(scanf("%d", &b)==1) {
        printf("%d\n", rec(b));
    }
    return 0;
}