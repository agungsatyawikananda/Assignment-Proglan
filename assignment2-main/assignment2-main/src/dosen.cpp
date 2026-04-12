#include <iostream>
#include "include/dosen.hpp"

using namespace std;

namespace sim {

    Dosen::Dosen(string nama, int umur, string asal,
                 string nip, string laboratorium, string jabatan)
        : Orang(nama, umur, asal),
          nip(nip), laboratorium(laboratorium), jabatan(jabatan)
    {}

    void Dosen::displayInfo() {
        cout << "=== DATA DOSEN ===" << endl;
        Orang::displayInfo();
        cout << "NIP         : " << nip << endl;
        cout << "Laboratorium: " << laboratorium << endl;
        cout << "Jabatan     : " << jabatan << endl;
    }

}