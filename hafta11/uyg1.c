#include <stdio.h>

// Altprogram başlığı (header): int toplama(int a, int b)
int toplama(int a, int b) {  // resmi parametreler: a, b
    return a + b;
}

int main() {
    int sayi1 = 5;
    int sayi2 = 3;
    int sonuc;

    // Gerçek parametreler: sayi1, sayi2
    sonuc = toplama(sayi1, sayi2);
    printf("Toplam: %d\n", sonuc);
    return 0;
}
