// c'de l-value r-value

#include <stdio.h>

int main() {
    int x = 10;  // x bir l-value'dir (bellekte bir adresi var)
    int y = x + 5;  // x + 5 bir r-value'dir (geçici bir ifade)

    printf("x'in adresi: %p, Degeri: %d\n", &x, x);
    printf("y'in adresi: %p, Degeri: %d\n", (void*)&y, y);

    // Hatalı kullanım: r-value'ye değer atanamaz!
    // 10 = x;  // Bu hata verir çünkü 10 bir r-value'dir, bellek adresi yok.

    return 0;
}
