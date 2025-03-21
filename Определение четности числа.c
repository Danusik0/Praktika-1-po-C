#include <stdio.h>

int main(void) {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);
    
    // Используем оператор switch для проверки остатка от деления на 2
    switch(num % 2) {
        case 0:
            printf("Число четное\n");
            break;
        default:
            printf("Число нечетное\n");
    }
    
    return 0;
}
