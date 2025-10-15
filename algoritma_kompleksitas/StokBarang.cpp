#include <iostream>
#include <string>

int main() {
    [span_6](start_span)
    char kodeBarang = 'A';
    int stok = 7;
    std::string namaBarang;
    std::string statusStok;

    [span_7](start_span)
    switch (kodeBarang) {
        case 'A':
            namaBarang = "Monitor";
            break;
        case 'B':
            namaBarang = "Keyboard";
            break;
        case 'C':
            namaBarang = "Mouse";
            break;
        default:
            namaBarang = "Barang tidak dikenal";
            break;
    }

    [span_8](start_span)
    if (stok > 10) {
        statusStok = "Stok Aman";
    } else if (stok >= 5 && stok <= 10) {
        statusStok = "Stok menipis";
    } else if (stok > 0 && stok < 5) {
        statusStok = "Stok Hampir Habis";
    } else {
        statusStok = "Stok Habis";
    }

    std::cout << "Nama Barang: " << namaBarang << std::endl;
    std::cout << "Jumlah Stok: " << stok << std::endl;
    std::cout << "Status: " << statusStok << std::endl;

    return 0;
}
