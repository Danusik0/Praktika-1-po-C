#include <stdio.h>

int main(void) {
    unsigned int n;
    printf("Введите целое число: ");
    scanf("%u", &n);
    
    // Число является степенью двойки, если n не ноль и (n & (n-1)) равно 0
    int isPowerOfTwo = n && (!(n & (n - 1)));
    
    printf("Результат: %d\n", isPowerOfTwo);
    return 0;
}
