#pragma once
#include "orang.hpp"

namespace sim {

    class Dosen : public Orang {    // (1) Dosen juga extends Orang, sama seperti Mahasiswa

    private:
        std::string nip;            // (2) Nomor Induk Pegawai
        std::string laboratorium;   // (3) Laboratorium tempat dosen bekerja
        std::string jabatan;        // (4) Jabatan akademik dosen (misal: Lektor, Profesor)

    public:
        Dosen(std::string nama, int umur, std::string asal,
              std::string nip, std::string laboratorium, std::string jabatan);
        void displayInfo() override;

    };

}