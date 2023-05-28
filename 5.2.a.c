#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    int array[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    // Знаходження номера максимального за модулем елемента масиву
    int maxIndex = 0;
    int size;
    for (int i = 1; i < n; i++) {
        if (abs(array[i]) > abs(array[maxIndex])) {
            maxIndex = i;
        }
          printf("Масив: ");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    // Знаходження добутку елементів після першого додатного елемента
    int product = 1;
    int firstPositiveIndex = -1;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            firstPositiveIndex = i;
            break;
        }
    }
    if (firstPositiveIndex != -1) {
        for (int i = firstPositiveIndex + 1; i < n; i++) {
            product *= array[i];
        }
    } else {
        product = 0;
    }
    printf("Номер максимального за модулем елемента: %d\n", maxIndex);
    printf("Добуток елементів після першого додатного елемента: %d\n", product);
    return 0;
}
}