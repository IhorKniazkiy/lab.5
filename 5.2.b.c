#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    // Ініціалізація генератора псевдовипадкових чисел
    srand(time(NULL));
    int n; // Розмір масиву
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    int array[n]; // Оголошення масиву розміром n
    // Заповнення масиву псевдовипадковими числами з відрізка [-100, 100]
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100; // Генерація числа від -100 до 100
    }
    // Виведення елементів масиву
    printf("Масив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int maxIndex = 0; // Індекс максимального за модулем елемента
    int maxAbsValue = abs(array[0]); // Максимальне значення за модулем
    // Пошук максимального за модулем елемента
    for (int i = 1; i < n; i++) {
        if (abs(array[i]) > maxAbsValue) {
            maxIndex = i;
            maxAbsValue = abs(array[i]);
        }
    }
    // Виведення номера максимального за модулем елемента
    printf("Номер максимального за модулем елемента: %d\n", maxIndex + 1);
    int product = 1; // Добуток елементів після першого додатного елемента
    int positiveFound = 0; // Прапорець, що показує, чи знайдено перший додатний елемент
    // Пошук першого додатного елемента і обчислення добутку
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            positiveFound = 1;
        } else if (positiveFound) {
            product *= array[i];
        }
    }
    // Виведення добутку елементів після першого додатного елемента
    printf("Добуток елементів після першого додатного елемента: %d\n", product);
    return 0;
}