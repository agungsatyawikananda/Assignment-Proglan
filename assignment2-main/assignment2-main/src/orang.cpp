#include <iostream>             // (1) Untuk menggunakan cout (print ke layar)
#include "include/orang.hpp"    // (2) Include header Orang — wajib agar compiler tahu deklarasinya

using namespace std;            // (3) Di .cpp boleh pakai ini — tidak akan "bocor" ke file lain
                                //     Sehingga kita bisa tulis "string" bukan "std::string"

namespace sim {                 // (4) Implementasi harus berada di namespace yang sama dengan deklarasinya

    Orang::Orang(string nama, int umur, string asal)  // (5) Definisi constructor
        : nama(nama), umur(umur), asal(asal) {}     // (6) Initializer list — cara efisien mengisi atribut
                                                        //     Lebih baik dari: this->nama = nama; di dalam {}

    void Orang::displayInfo() {             // (7) Orang:: artinya "fungsi displayInfo milik class Orang"
        cout << "Nama   : " << nama << endl;    // (8) endl = pindah baris + flush buffer
        cout << "Umur   : " << umur << endl;
        cout << "Asal   : " << asal << endl;
    }

}