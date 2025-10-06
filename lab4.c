#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
    int A, B, C;

    // Ввод данных
    printf("Введите вес первого груза (A): ");
    scanf("%d", &A);

    printf("Введите вес второго груза (B): ");
    scanf("%d", &B);

    printf("Введите вес третьего груза (C): ");
    scanf("%d", &C);

    if (A % 5 == 0 && B % 5 == 0 && C % 5 == 0) {
        printf("\nВсе грузы кратны 5 кг.\n");
        printf("Система разрешает погрузку контейнера.\n");
    }
    else {
        printf("\nНе все грузы кратны 5 кг.\n");
        printf("Система запрещает погрузку контейнера.\n");
    }

    return 0;
}