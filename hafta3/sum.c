#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Kullanıcıdan 5 sayi almak
    for (int i = 0; i < 5; i++) {
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Toplami yazdir
    printf("Toplam: %d\n", sum);

    return 0;
}
