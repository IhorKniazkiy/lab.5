#include <stdio.h>
int main() {
    int n, m;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);
    int a[n];
    printf("Введіть елементи масиву: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Введіть значення m: ");
    scanf("%d", &m);
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i += 2) {
        if (a[i] > m) {
            sum += a[i];
            count++;
        }
    }
    printf("Сума елементів з непарними номерами, які більші за %d: %d\n", m, sum);
    printf("Кількість елементів з непарними номерами, які більші за %d: %d\n", m, count);
    return 0;
}