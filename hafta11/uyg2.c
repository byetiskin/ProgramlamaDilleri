#include <stdio.h>

// Yordam (void): sadece işlem yapar, değer döndürmez
void yazdirMesaj(char isim[]) {
    printf("Merhaba, %s!\n", isim);
}

int main() {
    yazdirMesaj("Begum");
    return 0;
}
