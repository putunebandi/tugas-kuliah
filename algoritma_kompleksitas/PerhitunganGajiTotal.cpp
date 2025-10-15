#include <iostream>
#include <string>
#include <iomanip>

int main() {
    [span_9](start_span)
    std::string jabatan = "Supervisor";
    int masaKerja = 6;
    double gajiDasar = 5000000;

    double bonus = 0.0;
    double tunjangan = 0.0;

    [span_10](start_span)
    if (masaKerja >= 10) {
        bonus = 0.20 * gajiDasar; [span_11](start_span)
    } else if (masaKerja >= 5) {
        bonus = 0.10 * gajiDasar; [span_12](start_span)
    }

    [span_13](start_span)
    if (jabatan == "Manager") {
        tunjangan = 2000000;
    } else if (jabatan == "Supervisor") {
        tunjangan = 1000000;
    } else if (jabatan == "Staff") {
        tunjangan = 500000;
    }

    [span_14](start_span)
    double totalGaji = gajiDasar + bonus + tunjangan;

    [span_15](start_span)
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Jabatan: " << jabatan << std::endl;
    std::cout << "Gaji Dasar: " << gajiDasar << std::endl;
    std::cout << "Bonus: " << bonus << std::endl;
    std::cout << "Tunjangan: " << tunjangan << std::endl;
    std::cout << "Total Gaji: " << totalGaji << std::endl;

    return 0;
}
