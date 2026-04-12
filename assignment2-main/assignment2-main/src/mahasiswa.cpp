#include <iostream>
#include "include/mahasiswa.hpp"   // (1) Include header Mahasiswa

using namespace std;

namespace sim {

    Mahasiswa::Mahasiswa(string nama, int umur, string asal,
                         string NRP, string jurusan, float ipk)
        : Orang(nama, umur, asal),            // (2) Memanggil constructor Orang terlebih dahulu
          NRP(NRP), jurusan(jurusan), ipk(ipk)  // (3) Lalu mengisi atribut Mahasiswa sendiri
    {}

    void Mahasiswa::displayInfo() {
        cout << "=== DATA MAHASISWA ===" << endl;
        Orang::displayInfo();           // (4) Memanggil displayInfo() milik Orang — tidak perlu nulis ulang
        cout << "NRP     : " << NRP << endl;
        cout << "Jurusan : " << jurusan << endl;
        cout << "IPK     : " << ipk << endl;
    }

}