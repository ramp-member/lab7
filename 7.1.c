#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
void simvol() {
    char c;

    printf("Введите один символ: ");
    scanf(" %c", &c);

    switch (c) {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        printf("Это цифра.\n");
        break;

    default:
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            printf("Это буква.\n");
        else
            printf("Неизвестный символ.\n");
        break;
    }
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    simvol();
    return 0;
}