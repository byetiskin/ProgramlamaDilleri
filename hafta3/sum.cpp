#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    // Kullanıcıdan 5 sayı alma
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". sayiyi girin: ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Sonuçları yazdırma
    cout << "Toplam: " << sum;

    return 0;
}
