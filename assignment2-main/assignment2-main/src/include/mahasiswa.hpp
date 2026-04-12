#pragma once
#include "orang.hpp"       // (1) Include base class — Mahasiswa butuh tahu isi class Orang

namespace sim {

    class Mahasiswa : public Orang {    // (2) Mahasiswa EXTENDS Orang (inheritance)
                                        //     "public" artinya semua public member Orang tetap public di sini

    private:                            // (3) Atribut private: hanya bisa diakses di dalam class Mahasiswa
        std::string NRP;                // (4) Nomor Induk Mahasiswa
        std::string jurusan;            // (5) Jurusan mahasiswa
        float ipk;                      // (6) Indeks Prestasi Kumulatif

    public:
        Mahasiswa(std::string nama, int umur, std::string asal,
                  std::string nim, std::string jurusan, float ipk); // (7) Constructor dengan semua parameter termasuk warisan dari Orang
        void displayInfo() override;    // (8) override: memberitahu compiler bahwa ini menggantikan displayInfo() milik Orang

    };

}