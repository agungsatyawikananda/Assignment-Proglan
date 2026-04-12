#pragma once               // (1) Mencegah file ini di-include lebih dari sekali
#include <string>          // (2) Menggunakan tipe data std::string

namespace sim {            // (3) Semua class dibungkus dalam namespace "sim"

    class Orang {          // (4) Deklarasi class Orang sebagai base class

    protected:             // (5) Atribut protected: bisa diakses oleh class turunan
        std::string nama;  // (6) Nama orang — pakai std::string bukan string karena tidak ada "using namespace std" di .hpp
        int umur;          // (7) Umur orang dalam satuan tahun
        std::string asal;  // (8) Asal orang

    public:                // (9) Method public: bisa diakses dari luar class
        Orang(std::string nama, int umur, std::string asal); // (10) Constructor: dipanggil saat objek dibuat
        virtual void displayInfo(); // (11) virtual: method ini bisa di-override oleh class turunan

    };  // (12) Akhir dari deklarasi class — jangan lupa titik koma!

}   // (13) Akhir dari namespace sim