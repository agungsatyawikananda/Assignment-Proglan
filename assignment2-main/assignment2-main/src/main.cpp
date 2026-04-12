#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim;

int main(int argc, char ** argv)
{
    Mahasiswa mhs("Agung Satya", 18, "Bali",
                  "5024251007", "Teknik Komputer", 3.74);

    Dosen dsn("Budi Utomo", 45, "Malang",
              "12345678", "Robotika", "Kepala Departemen");

    Tendik tdk("Damar Rafi Malikal", 35, "Surabaya",
               "87654321", "Administrasi", "Staff Administrasi");

    mhs.displayInfo();
    cout << endl;      
    dsn.displayInfo();
    cout << endl;
    tdk.displayInfo();
    
    return 0;
}