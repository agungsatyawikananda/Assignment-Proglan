# Buat Laporan Disini
# Laporan Programming Assignment 3

Program ini adalah SIM Akademik sederhana yang dibuat menggunakan paradigma Object Oriented Programming (OOP) pada bahasa C++. Program ini mengelola data dari tiga jenis pengguna, yaitu Mahasiswa, Dosen, dan Tenaga Pendidikan (Tendik). 

Pada folder src/include/ ditambahkan empat file header yaitu `orang.hpp, mahasiswa.hpp, dosen.hpp, dan tendik.hpp` yang masing-masing berisi deklarasi class beserta atribut dan method-nya.

Pada folder src/ ditambahkan empat file implementasi yaitu `orang.cpp, mahasiswa.cpp, dosen.cpp, dan tendik.cpp` yang berisi definisi dari method-method yang telah dideklarasikan di file header. 

Ditambahkan objek untuk masing-masing class pada fungsi utama di `main.cpp`, yakni data Mahasiswa, Dosen, dan Tendik.
Kemudian dilakukan pemanggilan method `displayInfo()` yang pertama didefinisikan di class Orang, method ini di-override tiap class untuk menampilkan data tambahan sesuai dengan class-masing-masing

Pada folder `obj/` disimpan file-file hasil kompilasi .o 

Ditambahkan juga file `.gitignore` untuk mencegah file-file hasil kompilasi seperti `.o`, `.d`, dan `MyApp` ikut ter-push ke GitHub.

# Metode kompilasi:
```bash
make
./MyApp
```

```
=== DATA MAHASISWA ===
Nama   : Budi Santoso
Umur   : 20
Alamat : Surabaya
NIM     : 2023001
Jurusan : Teknik Informatika
IPK     : 3.85

=== DATA DOSEN ===
Nama   : Dr. Andi Wijaya
Umur   : 45
Alamat : Malang
NIP         : NIP001
Mata Kuliah : Pemrograman OOP
Jabatan     : Lektor Kepala

=== DATA TENDIK ===
Nama   : Siti Rahayu
Umur   : 35
Alamat : Surabaya
NIP     : NIP002
Divisi  : Akademik
Jabatan : Staff Administrasi
```

| Konsep | Contoh dalam Program |
|---|---|
| **Class** | `class Orang`, `class Mahasiswa`, `class Dosen`, `class Tendik` |
| **Inheritance** | `Mahasiswa : public Orang` |
| **Encapsulation** | Atribut `private` dan `protected` |
| **Polymorphism** | `displayInfo()` di-override di tiap class |
| **Namespace** | `namespace sim` |