#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string jabatan = "Supervisor";
    int masaKerja = 6;
    double gajiDasar = 5000000;
    double bonus = 0.0;
    double tunjangan = 0.0;
    if (masaKerja >= 10) {
        bonus = 0.20 * gajiDasar;
    } else if (masaKerja >= 5) {
        bonus = 0.10 * gajiDasar;
    }
    if (jabatan == "Manager") {
        tunjangan = 2000000;
    } else if (jabatan == "Supervisor") {
        tunjangan = 1000000;
    } else if (jabatan == "Staff") {
        tunjangan = 500000;
    }
    double totalGaji = gajiDasar + bonus + tunjangan;
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Jabatan: " << jabatan << std::endl;
    std::cout << "Gaji Dasar: " << gajiDasar << std::endl;
    std::cout << "Bonus: " << bonus << std::endl;
    std::cout << "Tunjangan: " << tunjangan << std::endl;
    std::cout << "Total Gaji: " << totalGaji << std::endl;
    return 0;
}
