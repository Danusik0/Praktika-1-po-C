#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("C = %.0f ; F = %.2f\n", celsius, fahrenheit);
    return 0;
}
