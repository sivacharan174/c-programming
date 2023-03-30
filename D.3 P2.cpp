#include <stdio.h>

void calculate_circle(float radius, float *diameter, float *circumference, float *area) {
    *diameter = 2 * radius;
    *circumference = 2 * 3.14159 * radius;
    *area = 3.14159 * radius * radius;
}

int main() {
    float radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    calculate_circle(radius, &diameter, &circumference, &area);

    printf("The diameter of the circle is: %.2f\n", diameter);
    printf("The circumference of the circle is: %.2f\n", circumference);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

