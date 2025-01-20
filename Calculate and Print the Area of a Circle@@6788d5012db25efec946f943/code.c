#include <stdio.h>
#include <math.h>

float radius;

int main() {
    scanf("%f",&radius);
    printf("Area: %.2f",3.14*pow(radius,2));
    return 0;
}