#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void calculator() {
    float x, y;
    char op;
    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &op, &y);

    switch (op) {
    case '+':
        printf("= %.2f\n", x + y);
        break;
    case '-':
        printf("= %.2f\n", x - y);
        break;
    case '*':
        printf("= %.2f\n", x * y);
        break;
    case '/':
        if (y != 0)
            printf("= %.2f\n", x / y);
        else
            printf("Ошибка: деление на ноль!\n");
        break;
    }
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    calculator();
    return 0;
}