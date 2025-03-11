// c++'da büyük küçük harf duyarlılığı

#include <iostream>
using namespace std;

int main() {
    int toplam = 10;
    int Toplam = 20;
    int TOPLAM = 30;

    cout << "Toplam: " << toplam << endl;
    cout << "Toplam: " << Toplam << endl;
    cout << "Toplam: " << TOPLAM << endl;

    return 0;
}
