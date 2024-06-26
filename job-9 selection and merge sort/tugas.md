### Contoh aplikasi yang mengimplementasikan Selection sort dan Merge sort 
#### Selection sort
1. Aplikasi Penggajian<br>
   Algoritma selection sort dapat digunakan untuk mengurutkan data karyawan berdasarkan gaji mereka.
   Hal ini dapat membantu HRD dalam menemukan karyawan dengan gaji tertinggi atau terendah dengan cepat.
2. Rekomendasi Produk<br>
   Sistem rekomendasi produk di toko online dapat menggunakan selection sort untuk mengurutkan produk
   berdasarkan popularitas atau relevansi dengan pengguna.

#### Merge Sort
1. Penggabungan data<br>
   Algoritma Merge sort dapat digunakan untuk menggabungkan dua kumpulan data yang sudah terurut
   menjadi satu kumpulan data yang terurut.
2. Analisis keuangan<br>
   Merge sort dapat digunakan untuk mengurutkan data keuangan, seperti harga saham atau nilai tukar
   mata uang, untuk analisis dan visualisasi.

Cara Kerja:<br>
1. Selection sort<br>
   Bekerja dengan cara mengidentifikasi elemen terkecil dalam daftar dan menukarnya dengan elemen pertama.
   Kemudian, algoritma mengulangi proses ini dengan elemen berikutnya, hingga semua elemen terurut.
   - Iterasi-> Algoritma melakuan iterasi melalui daftar elemen sebanyakk n kali, di mana
     n adalah jumlah elemen dalam daftar.
   - Pencarian elemen terkecil-> Pada setiap iterasi, algoritma mencari elemen terkecil dalam daftar yang tersisa.
   - Penukaran-> Elemen terkecil ditukar dengan elemen pertama dalam daftar.
   - Pengecualian elemen yang sudah diurutkan-> Elemen yang sudah diurutkan pada iterasi sebelumnya tidak perlu diperiksa lagi.
2. Merge sort<br>
   Algoritma "divide and conquer" yang bekerja dengan cara membagi daftar menjadi dua bagian yang lebih kecil,
   mengurutkan setiap bagian secara rekursif, dan kemudian menggabungkan kedua bagian yang sudah terurut.
   - Pembagian-> Algoritma membagi daftar menjadi dua bagian yang lebih kecil dengan ukuran yang sama/hampir sama.
   - Pengurutan rekursif-> setiap bagian diurutkan secara rekursif menggunakan merge sort.
   - Penggabungan-> Dua bagian yang sudah terurut digabungkan menjadi satu daftar yang terurut.
   
