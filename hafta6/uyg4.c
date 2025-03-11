// c'de durağan (statik) kapsam örneği

#include <stdio.h>

int x = 10; // Global değişken

void fonksiyon() {
    int x = 20; // Lokal değişken (fonksiyon içinde geçerli)
    printf("Fonksiyon icindeki x: %d\n", x);
}

int main() {
    printf("Ana programdaki x: %d\n", x);
    fonksiyon();
    return 0;
}
