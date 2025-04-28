#include <stdio.h>

// Değer ile çağırma (Call by Value)
void degistirValue(int a) {
    a = a + 10;
}

// Başvuru ile çağırma (Call by Reference)
void degistirReference(int *a) {
    *a = *a + 10;
}

int main() {
    int sayi = 5;
    printf("Baslangic: %d\n", sayi);
    
    degistirValue(sayi);
    printf("Call by Value sonrasi: %d\n", sayi);
    
    degistirReference(&sayi);
    printf("Call by Reference sonrasi: %d\n", sayi);
    
    return 0;
}
