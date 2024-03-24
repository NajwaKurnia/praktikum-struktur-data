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
## [Jobsheet 2- Array, pointer, structure](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/745cfe7c51423f51f712b2072bcdea7e867d9fcf)

#### Array
Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing elemen array diakses menggunakan indeks, dan elemen array dapat diakses langsung (acak). Indeks dimulai dari 0 pada bahasa pemograman c ini. Array biasanya digunakan untuk menyimpan koleksi data yang terstruktur seperti daftar bilangan, string, atau objek.

#### Pointer
Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda dengan variable biasa yang berisi nilai tertentu. Suatu pointer bukan berisi dengan suatu nilai data seperti halnya pada variabel biasa, variabel pointer berisi suatu alamat. Untuk mendeklarasikan variabel pointer digunakan tanda asterisk atau bintang (*) didepan variabel yang dideklarasikan pada tipe sata tertentu. Tanda ini dipakai untuk mengakses nilai dari variabel yang telah ditunjuk.
- Untuk mendapatkan alamat memori pointer maka perintah yang digunakan adalah menambahkan tanda (&) didepan variabel.
- Untuk mendapatkan isi atau nilai dari variabel pointer maka perintah yang digunakan cukup nama variabelnya saja.
- Untuk mendapatkan isi atau nilai dari alamat yang terdapat pada isi pointer maka perintah yang digunakan adalah menambahkan tanda * didepan variabel.

#### Structure
Dalam bahasa pemograman c sebuah struct adalah kumpulan variabel yang berisi tipe data yang berbeda, bernaung dalam satu nama objek yang serumpun. Sebelum membuat sebuah struct anda perlu menentukan tipe data apa saja di dalamnya. Di saat sebuah struct dideklarasikan, tidak ada alokasi memori yang dilakukan. utnuk mengalokasikan memori menggunakan struct, harus dibuat variabel baru dari struct tersebut.
Ada 2 tipe operator yang digunakan untuk mengakses sebuah struct.<br>
1. '.' -Member operator.<br>
2. '->' -Operator digunakan untuk pointer.<br>
***
## [Jobsheet 3-Single Linked List](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/87df167858d5d79df2410c40b75bd85373bb148a)

Single linked list adalah struktur data linear yang terdiri dari sejumlah simpul(node) yang terhubung satu sama lain dengan menggunakan pointer. Setiap simpul memiliki dua bagian, data pointer yang menunjuk ke simpul berikutnya dalam daftar. Di simpul terakhir, pointer menunjuk ke nilai null, menandakan akhir dari linked list.

#### Simpul/Nodes
Sebuah simpul/node berisi alamat dan kumpulan data, dalam sebuah simpul/node keduanya dibungkus menjadi sebuah objek berupa struct.
#### Penggunaan alokasi memory
Alokasi memori menyediakan fasilitas untuk membuat ukuran buffer dan array secara dinamik. Dinamik artinya bahwa ruang dalam memori akan dialokasikan ketika program dieksekusi (run time). Fasilitas ini memungkinkan user untuk membuat tipe data dan struktur dengan ukuran dan panjang berapapun yang disesuaikan dengan kebutuhan di dalam program.<br>
1. Perintah sizeof()
  sebelum kita menggunakan alokasi memori, kita harus mengenal perintah sizeof. Ini digunakan untuk
   - mendapatkan ukuran dari berbagai tipe data, variabel ataupun struktur.
   - return value: ukuran dari obyek yang bersangkutan dalam byte.
   - parameter dari sizeof(): sebuah obyek atau sebuah tipe data.<br>
2. Perintah malloc()
   Fungsi standar dalam c yang digunakan untuk mengalokasikan memori adalah malloc(). Fungsi dari malloc() ini adalah: void *malloc(int jml_byte) banyaknya byte yang akan dipesan dinyatakan sebagai parameter fungsi. Return value dari fungsi ini adalah sebuah pointer yang tidak bertipe (pointer to void) yang menunujuk ke buffer yang dialokasikan. Jika proses alokasi gagal dilakukan, fungsi ini akan memberikan return value berupa sebuah pointer NULL.
#### Single Link List
Sebuah data yang berupa simpul atau node beralamat yang saling bertaut. Setiap simpul bisa menyimpan data yang mana isinya bisa char, int, string, atau tipe data lainnya. Linked list ini dibuat demikian dengan tujuan mengurutkan data, linked list ini memiliki kemampuan untuk memutuskan urutan data, Linked list ini memiliki kemampuan untuk memutuskan urutan data kemudian menyambungkannya lagi.
***
## [Jobsheet 4-Doubly Linked List](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/1a528a0d1b0bcafff9b27204dc753998eb0eca63)

Doubly linked list (DLL) berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama dnegan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal. Sama halnya dengan single linked list sebuah dobly link list memiliki head dan tail, perbedaannya doubly link list memiliki 2 arah data yakni next dan previous.

Kelebihan doubly link list dibandingkan single link list
1. DLL bisa berjalan dalam 2 arah ke depan dan kebelakang.
2. Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang menunjuk ke simpul yang akan dihapus.
3. Dapat melakukan proses insert() simpul lebih efisien.

Dalam single link list penghapusan simpul, pointer simpul data sebelumnya diperlukan san untuk mendapatkannya terkadang list data diulang dari awal. Berbeda dengan dobly link list kita langsung dapat pointer simpul data sebelumnya menggunakan pointer previous.

Kelemahan dobly link list
1. Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer.
2. Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.

Jenis proses insertion()
1. penambahan simpul didepan.
2. penambahan setelah simpul yang ditentukan.
3. Di simpul yang paling akhir.
4. Penambahan sebelum simpul yang ditentukan.
***
## [Jobsheet 5- Double Linked List and Circular Linked List](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/bfb748b221932ecdda21de74fa1875d444675abf)

#### Double Linked List
Double linked list elemen-elemen dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev). Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, masing-masing elemen dilengkapi dengan pointer prev atau back yang menunjuk ke elemen sebelumnya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunjuk NULL. Untuk menunjukkan tail dari double linked list tersebut, maka pointer next dari elemen terakhit menunjuk NULL.

Untuk melintas kembali melalui double linked list, dapat digunakan pointer prev dari elemen yang berurutan pada arah tail ke head. Double linked list mempunyai fleksibelitas yang lebih tinggi dari pada single linked list dalam perpindahan pada list.

#### Circular linked list
circular list adalah bentuk lain dari linked list yang memberikan fleksibelitas dalam melewatkan elemen. Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail. pada circular list, pointer next dari elemen terakhir menunjuk ke elemen pertaman dan bukan menunjuk NULL. pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.
***
## [Jobsheet 6- Stack](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/79e3beb60c2f082d28546042e6ee0fc2821bab52)

#### Stack
Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data yang lain. Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO. Elemen terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi, untuk meletakkan sebuah elemen pada bagian atas dari stack, disebut push, untuk memindahkan dari tempat yang atas disebut pop.

#### Stack dengan array
Bentuk penyajian stack bisa menggunakan tipe data array, tetapi ebenarnya penyajian stack memnggunakan array adalah kurang tepat karena banyaknya elemen dalam array adalah statis, sedangkan dalam stack banyaknya elemen sangat bervariasi atau dinamis. Array bisa digunakan untuk penyajian stack, tetapi dengan anggapan bahwa banyaknya elemen maksimal dari suatu stack tidak melebihi batas maksimum banyaknya elemen array. Bila diteruskan menambah data, maka akan terjadi overflow. Ada dua macam penyajian stack menggunakan array, yaitu Single stack dan Double stack.

#### Operasi pada stack
1. Push digunakan untuk menambahkan elemen atau data baru dalam tumpukan. Elemen baru tersebut pasti akan menjadi elemen yang paling atas dalam tumpukan setiap kali ditambahkan. Sebelum menambahkan elemen baru kita harus memastikan tumpukan belum penuh.
2. Pop digunakan untuk menghapus elemen yang berada pada posisi paling atas dari stack.
3. Peek digunakan untuk mengecek elemen atau data paling atas tanpa menghapusnya dari stack.
4. isFull digunakan untuk memeriksa apakah kondisi stack sudah penuh.
   Dengan cara:
   - menambah satu (increment) nilai TOP of STACK ada penmabahan elemen stack selama stack masih belum penuh.
   - Isikan nilai baru ke stack berdasarkan indeks TOP of STACK setelah ditambah satu (increment).
5. isEmpty digunakan untuk memeriksa apakah stack masih dalam kondisi kosong.
   Dengan cara, memeriksa TOP of STACK masih = -1 maka berarti stack masih kosong.
7. Clear digunakan untuk mengosongkan stack.
