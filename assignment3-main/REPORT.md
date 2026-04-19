## Deskripsi Program
Program dibuat untuk menentukan jenis segitiga berdasarkan tiga titik koordinat yang di-input oleh user. Jenis segitiga adalah: sama sisi, sama kaki, siku-siku, dan sembarang. Menggunakan dua class, yaitu Point2D untuk representasi titik, dan Triangle untuk mengecek jenis sefitiga.

## Isi Program
Pada folder src/include/ terdapat dua file header, yaitu point2d.hpp yang berisi deklarasi class Point2D beserta fungsi perhitungan jarak antar titik, dan triangles.hpp yang berisi deklarasi class Triangle beserta method TriangleType() untuk menentukan jenis segitiga.

Pada folder src/ terdapat point2d.cpp yang berisi operator aritmatika pada Point2D, triangles.cpp yang berisi logika pengecekan jenis segitiga, serta main.cpp sebagai file utama yang menerima input dari user dan menampilkan output.

## Cara Kerja Program 
Program menerima input jumlah segitiga (N), lalu untuk setiap segitiga user memasukkan tiga titik koordinat (X Y Z). Dari ketiga titik tersebut dihitung panjang ketiga sisinya menggunakan rumus jarak dua titik:

**jarak = √((x2-x1)² + (y2-y1)² + (z2-z1)²)**

Dari panjang ketiga sisi, dapat ditentukan jenis segitiga dengan urutan pengecekan sama sisi terlebih dahulu, lalu siku-siku, kemudian sama kaki, dan terakhir sembarang.

## Contoh Input dan Output
make
./MyApp

**Input:**
Masukkan jumlah segitiga: 4

--- Segitiga 1 ---
Titik 1 (x y z): 0 0 0
Titik 2 (x y z): 1 0 0
Titik 3 (x y z): 0.5 0.866 0

--- Segitiga 2 ---
Titik 1 (x y z): 0 0 0
Titik 2 (x y z): 1 0 0
Titik 3 (x y z): 0 1 0

--- Segitiga 3 ---
Titik 1 (x y z): 0 0 0
Titik 2 (x y z): 3 0 0
Titik 3 (x y z): 0 4 0

--- Segitiga 4 ---
Titik 1 (x y z): 0 0 0
Titik 2 (x y z): 3 0 0
Titik 3 (x y z): 1 2 0

**Output**
=== HASIL ===
Segitiga 1: sama sisi
Segitiga 2: sama kaki
Segitiga 3: siku-siku
Segitiga 4: sembarang
