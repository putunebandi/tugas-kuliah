#include <iostream>

int main() {
    int suhu = 36;
    std::cout << "Suhu saat ini: " << suhu << " derajat." << std::endl;
    if (suhu < 38) {
        std::cout << "Status: Suhu Normal" << std::endl;
    }
    return 0;
}
