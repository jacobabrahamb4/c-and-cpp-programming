#include <stdio.h>

int main() {
    float a, b, c, sum;
    printf("Print three floats: \n");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b = %f, c = %f\n", a, b);
    sum = a + b + c;
    printf("sum = %f\n", sum);
    return 0;
}