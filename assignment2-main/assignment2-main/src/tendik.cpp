#include <iostream>
#include "include/tendik.hpp"

using namespace std;

namespace sim {

    Tendik::Tendik(string nama, int umur, string asal,
                   string nip, string divisi, string jabatan)
        : Orang(nama, umur, asal),
          nip(nip), divisi(divisi), jabatan(jabatan)
    {}

    void Tendik::displayInfo() {
        cout << "=== DATA TENDIK ===" << endl;
        Orang::displayInfo();
        cout << "NIP     : " << nip << endl;
        cout << "Divisi  : " << divisi << endl;
        cout << "Jabatan : " << jabatan << endl;
    }

}