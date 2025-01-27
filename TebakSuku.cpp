#include <iostream>
#include <cstdlib> // Untuk fungsi system()

void tampilkanOutput(const std::string& suku) {
    if (suku == "Jawa") {
        std::cout << "Memutar video untuk Suku Jawa..." << std::endl;
        // Buka link video menggunakan browser default
        system("start https://www.facebook.com/share/p/15a3pGeBcA/");
    } else if (suku == "Sunda") {
        std::cout << "Selamat datang di tanah Sunda, wargi!" << std::endl;
    } else if (suku == "Betawi") {
        std::cout << "Betawi, ye kan? Ente emang asli!" << std::endl;
    } else if (suku == "Batak") {
        std::cout << "Horas! Selamat datang, orang Batak." << std::endl;
    } else {
        std::cout << "Belum masuk dataset bjir." << std::endl;
    }
}

int main() {
    int pilihan;
    std::string sukuLainnya;

    std::cout << "Pilih suku berikut ini:\n";
    std::cout << "1. Suku Jawa\n";
    std::cout << "2. Suku Sunda\n";
    std::cout << "3. Suku Betawi\n";
    std::cout << "4. Suku Batak\n";
    std::cout << "5. Suku lainnya\n";
    std::cout << "Masukkan pilihan (1-5): ";
    std::cin >> pilihan;

    switch (pilihan) {
        case 1:
            tampilkanOutput("Jawa");
            break;
        case 2:
            tampilkanOutput("Sunda");
            break;
        case 3:
            tampilkanOutput("Betawi");
            break;
        case 4:
            tampilkanOutput("Batak");
            break;
        case 5:
            std::cout << "Masukkan nama suku: ";
            std::cin.ignore(); // Membersihkan buffer
            std::getline(std::cin, sukuLainnya);
            tampilkanOutput(sukuLainnya);
            break;
        default:
            std::cout << "Pilihan tidak valid!" << std::endl;
    }

    return 0;
}
