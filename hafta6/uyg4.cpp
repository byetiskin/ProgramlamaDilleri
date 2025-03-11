// c++'da durağan (statik) kapsam örneği

#include <iostream>
using namespace std;

int x = 10;  // Global değişken (Tüm fonksiyonlar erişebilir)

void fonksiyon() {
    int x = 20;  // Lokal değişken (Sadece bu fonksiyon içinde geçerli)
    cout << "Fonksiyon içindeki x: " << x << endl;
}

int main() {
    cout << "Ana programdaki x: " << x << endl;
    fonksiyon();
    return 0;
}
