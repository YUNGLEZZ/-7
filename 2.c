#include <stdio.h>
#include <ctype.h>
int main(void) {
    char a;
    int k = 0, i = 0;
    while((a = getchar()) != EOF) {
        if(isdigit(a)) {
            i++;
        } else if(i == 3) {
            k++;
            i = 0;
        } else {
            i = 0;
            
        }
    }
    printf("%d\n", k); 
    return 0;
}