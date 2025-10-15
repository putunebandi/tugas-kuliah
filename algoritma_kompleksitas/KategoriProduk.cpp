#include <iostream>
#include <string>

int main() {
    int kodeProduk = 3;
    std::string namaKategori;
    std::cout << "Kode Produk: " << kodeProduk << std::endl;
    switch (kodeProduk) {
        case 1:
            namaKategori = "Elektronik";
            break;
        case 2:
            namaKategori = "Pakaian";
            break;
        case 3:
            namaKategori = "Makanan";
            break;
        case 4:
            namaKategori = "Peralatan Rumah Tangga";
            break;
        case 5:
            namaKategori = "Buku";
            break;
        default:
            namaKategori = "Kode Produk Tidak Valid";
            break;
    }
    std::cout << "Kategori: " << namaKategori << std::endl;
    return 0;
}
