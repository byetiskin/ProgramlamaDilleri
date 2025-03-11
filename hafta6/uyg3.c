// c'de büyük küçük harf duyarlılığı

#include <stdio.h>

int main() {
    int toplam = 10;
    int Toplam = 20;
    int TOPLAM = 30;

    printf("Toplam: %d\n", toplam);
    printf("Toplam: %d\n", Toplam);
    printf("Toplam: %d\n", TOPLAM);

    return 0;
}
