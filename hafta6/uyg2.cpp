// c++'da l-value r-value

#include <iostream>
using namespace std;

int main() {
    int x = 10;  // l-value (bellekte yeri var)
    int y = x + 5;  // r-value (geçici bir değer)

    cout << "x'in adresi: " << &x << ", Degeri: " << x << endl;
    cout << "y'in adresi: " << &y << ", Degeri: " << y << endl;

    return 0;
}
