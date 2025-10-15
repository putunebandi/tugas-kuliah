#include <iostream>
#include <string>

int main() {
    int nilai = 85;
    std::string hasil;
    std::cout << "Nilai Anda: " << nilai << std::endl;
    if (nilai >= 85 && nilai <= 100) {
        hasil = "Sangat Baik";
    } else if (nilai >= 70 && nilai <= 84) {
        hasil = "Baik";
    } else if (nilai >= 55 && nilai <= 69) {
        hasil = "Cukup";
    } else if (nilai >= 0 && nilai < 55) {
        hasil = "Kurang";
    } else {
        hasil = "Nilai tidak valid (di luar rentang 0-100)";
    }
    std::cout << "Predikat: " << hasil << std::endl;
    return 0;
}
