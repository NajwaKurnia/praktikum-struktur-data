# praktikum-struktur-data
Repositori ini berisi penjelasan mengenai materi yang ada di dalam obsheet beserta tugas dan latihan yang dikerjakan oleh mahasiswa. Penjelasan beserta link jobsheet telah tertera di bawah.

Dosen: Randi Proska Sandra, M.Sc <br>
Kode Kelas: INF1.62.2014 <br>
seksi: 202323430156 <br>
Nama: Najwa Kurnia<br>
Nim: 23343058<br>
***
# Jobsheet
***
## [Jobsheet 1- Pengenalan struktur data](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/3b321a322ef1d980439f955e0f100f063d3b044b?diff=unified&w=0)

Pemograman struktur data ada beberapa macam. Salah satunya adalah pemograman c. Dalam pemograman ini biasanya menggunakan variable Array, Struktur dan Linked list.
Struktur data adalah cara penyimpanan, penyusunan, dan pengaturan data di dalam media penyimpanan komputer sehingga data tersebut dapat digunakan secara efisien.
Sedangkan Data adalah representasi dari fakta dunia nyata. Fakta atau keterangan tentang kenyataan yang disimpan, direkam atau direpresentasikan dalam bentuk tulisan, suara, gambar, sinyal atau simbol.
Konstanta digunakan untuk menyatakan nilai tetap sedangkan variable digunakan dalam program untuk menyatakan nilai yang dapat berubah-ubah selang eksekusi berlangsung.

struktur data yang standar digunakan dibidang informatika adalah:
- List Linear (Linked List) senarai dan variasinya
- Multilist
- stack (Tumpukan)
- Queue (antrian)
- Tree (pohon)
- Graph (graf)
***
## [Jobsheet 2- Array, pointer, structure]

### Array
Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing elemen array diakses menggunakan indeks, dan elemen array dapat diakses langsung (acak). Indeks dimulai dari 0 pada bahasa pemograman c ini. Array biasanya digunakan untuk menyimpan koleksi data yang terstruktur seperti daftar bilangan, string, atau objek.

### Pointer
Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda dengan variable biasa yang berisi nilai tertentu. Suatu pointer bukan berisi dengan suatu nilai data seperti halnya pada variabel biasa, variabel pointer berisi suatu alamat. Untuk mendeklarasikan variabel pointer digunakan tanda asterisk atau bintang (*) didepan variabel yang dideklarasikan pada tipe sata tertentu. Tanda ini dipakai untuk mengakses nilai dari variabel yang telah ditunjuk.
- Untuk mendapatkan alamat memori pointer maka perintah yang digunakan adalah menambahkan tanda (&) didepan variabel.
- Untuk mendapatkan isi atau nilai dari variabel pointer maka perintah yang digunakan cukup nama variabelnya saja.
- Untuk mendapatkan isi atau nilai dari alamat yang terdapat pada isi pointer maka perintah yang digunakan adalah menambahkan tanda * didepan variabel.

### Structure
Dalam bahasa pemograman c sebuah struct adalah kumpulan variabel yang berisi tipe data yang berbeda, bernaung dalam satu nama objek yang serumpun. Sebelum membuat sebuah struct anda perlu menentukan tipe data apa saja di dalamnya. Di saat sebuah struct dideklarasikan, tidak ada alokasi memori yang dilakukan. utnuk mengalokasikan memori menggunakan struct, harus dibuat variabel baru dari struct tersebut.
Ada 2 tipe operator yang digunakan untuk mengakses sebuah struct.<br>
1. '.' -Member operator.<br>
2. '->' -Operator digunakan untuk pointer.<br>
