#include <stdio.h> 
double avg(double a, double b) {
    double sum = (a + b) / 2;
    return sum;
}
int main(void) {
    double c, d;
    while(scanf("%lf %lf", &c, &d) == 2) {
        printf("%0.4lf\n", avg(c, d));
    }
    return 0;
}