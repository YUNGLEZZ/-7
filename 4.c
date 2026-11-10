#include <stdio.h>
void adress(double *ptr1, double *ptr2) {
    double avg = (*ptr1 + *ptr2) / 2;
    *ptr1 = avg;
    *ptr2 = avg;
}
int main(void) {
    double c, d;
    while(scanf("%lf %lf", &c, &d)==2) {
        printf("%lf %lf\n", c, d);
        adress(&c, &d);
        printf("%lf %lf\n", c, d);
    }
    return 0;
}