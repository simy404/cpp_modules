#include <iostream>

void selamVer() {
    std::cout << "Merhaba!" << std::endl;
}

int main() {
    // Yöntem 1: Örtülü (Implicit) dönüşüm. 'selamVer' ifadesi otomatik olarak adrese dönüşür.
    void (*ptr1)() = selamVer;

    // Yöntem 2: Açık (Explicit) şekilde adres operatörünü kullanmak.
    void (*ptr2)() = &selamVer;

    // Her ikisi de aynı bellek adresini tutar.
    if (ptr1 == ptr2) {
        std::cout << "ptr1 ve ptr2 aynı adresi gösteriyor." << std::endl;
    }

    // Her ikisiyle de fonksiyon çağrılabilir.
    ptr1();
    (*ptr2)(); // Bu eski C stili de geçerlidir.
}
