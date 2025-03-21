#include <stdio.h>

int main(void) {
    int a, b, c, prod;
    printf("Введите три числа (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    
    prod = a * b * c;
    // Вычисляем знак произведения: 1 если prod>0, -1 если prod<0, 0 если prod==0
    int sign = (prod > 0) - (prod < 0);
    
    printf("Знак произведения: %d\n", sign);
    return 0;
}
