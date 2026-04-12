#pragma once
#include "orang.hpp"

namespace sim {

    class Tendik : public Orang {   // (1) Tendik (Tenaga Kependidikan) juga extends Orang

    private:
        std::string nip;            // (2) Nomor Induk Pegawai
        std::string divisi;         // (3) Divisi tempat bekerja (misal: Akademik, Keuangan)
        std::string jabatan;        // (4) Jabatan di divisi tersebut (misal: Staff, Kepala Bagian)

    public:
        Tendik(std::string nama, int umur, std::string asal,
               std::string nip, std::string divisi, std::string jabatan);
        void displayInfo() override;

    };

}