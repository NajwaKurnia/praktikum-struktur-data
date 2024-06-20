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
- List Linear (Linked List) senarai dan variasinya<br>
  ![download](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/dc82714b-5f26-49ab-b813-0f0b3c79b481)
  
- Multilist<br>
![multi lis](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/fcb24a9d-951b-4744-aa8c-6fb27fb340b9)

- stack (Tumpukan)<br>
![stack](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/98bac58b-aecb-4e4f-ad76-a6b1ac55e880)

- Queue (antrian)<br>
![queue](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/360c08fb-8c9d-4995-ba90-1d40c46b928c)

- Tree (pohon)<br>
![tree](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/80bcc42b-90b3-4406-a8c3-4610ef44f02d)

- Graph (graf)<br>
![graph](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/9bb75af1-423d-49e1-b7da-84047a3a7be7)

***
## [Jobsheet 2- Array, pointer, structure](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/745cfe7c51423f51f712b2072bcdea7e867d9fcf)

#### Array
Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing elemen array diakses menggunakan indeks, dan elemen array dapat diakses langsung (acak). Indeks dimulai dari 0 pada bahasa pemograman c ini. Array biasanya digunakan untuk menyimpan koleksi data yang terstruktur seperti daftar bilangan, string, atau objek.<br>
![array](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/2caf5c8b-f4e3-420e-b72b-ef2083349fda)


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

![single](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/980d36a7-d752-401d-a6c1-79147c440c08)

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

![double](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/9b8c7216-4e6d-4474-8597-3ad41f2f287e)

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
## [Jobsheet 5- Double and Circular Linked List](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/bfb748b221932ecdda21de74fa1875d444675abf)

![double and circular](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/17b8320b-e253-4670-9403-876d3a8bfcc9)

#### Double Linked List
Double linked list elemen-elemen dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev). Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, masing-masing elemen dilengkapi dengan pointer prev atau back yang menunjuk ke elemen sebelumnya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunjuk NULL. Untuk menunjukkan tail dari double linked list tersebut, maka pointer next dari elemen terakhit menunjuk NULL.

Untuk melintas kembali melalui double linked list, dapat digunakan pointer prev dari elemen yang berurutan pada arah tail ke head. Double linked list mempunyai fleksibelitas yang lebih tinggi dari pada single linked list dalam perpindahan pada list.

#### Circular linked list
circular list adalah bentuk lain dari linked list yang memberikan fleksibelitas dalam melewatkan elemen. Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail. pada circular list, pointer next dari elemen terakhir menunjuk ke elemen pertaman dan bukan menunjuk NULL. pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.
***
## [Jobsheet 6- Stack](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/79e3beb60c2f082d28546042e6ee0fc2821bab52)

![stack](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/55d88311-1f30-490f-9ffc-4639a81c9785)

#### Stack
Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data yang lain. Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO. Elemen terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi, untuk meletakkan sebuah elemen pada bagian atas dari stack, disebut push, untuk memindahkan dari tempat yang atas disebut pop.

#### Stack dengan array
![stack array](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/8e40bf4e-fdb5-4349-b7e3-662f74acb5b9)

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
***
## [Jobsheet 7-Queue](https://github.com/NajwaKurnia/praktikum-struktur-data/commit/59b9ac253304e102912360cc077842399dcae801)
![queue](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/109c15b5-690e-4ec9-b122-555b5ceeaca7)

#### Konsep Queue
Sebuah antrian sangat berguna pada pemograman struktur data. Antrian menggunakan prinsip FIFO First In First Out. Item yang mendapatkan giliran pertama adalah item yang pertama keluar. Dalam istilah pemograman, meletakkan sebuah item ke dalam antrian disebut "enqueue" dan menghapusnya disebut "dequeue".

#### Spesifikasi Queue
Sebuah antrian dinamakan juga dengan sebuah objek atau lebih spesifiknya ADT yang memiliki operasi sebagai berikut:
- Enqueue: Menambahkan elemen ke akhir antrian.
- Dequeue: menghapus elemen dari depan antrian.
- IsEmpty: memeriksa apakah antrian kosong.
- IsFull: memeriksa apakah antrian penuh.
- Peek: mendapatkan nilai antrian depan tanpa menghapusnya.

#### Cara Kerja Queue
1. Dua pointer yang disebut FRONT dan REAR digunakan untuk melacak elemen pertama dan terakhir dalam antrian.
2. Saat menginisialisasi antrian, kami menetapkan nilai FRONT dan REAR ke -1.
3. Pada enqueing elemen, kita meningkatkan nilai indeks REAR dan menempatkan elemen baru di posisi yang ditunjuk oleh REAR.
4. Pada dequeueing suatu elemen, kita mengembalikan nilai yang ditunjuk oleh FRONT dan meningkatkan indeks FRONT.
5. Sebelum enqueing, kami memeriksa apakah antrian sudah penuh.
6. Sebelum dequeueing, kami memeriksa apakah antrian sudah kosong.
7. Saat membuat elemen pertama, kami menetapkan nilai FRONT ke 0.
8. Saat mendekor elemen terakhir, kita mereset nilai FRONT dan REAR ke -1.
***
## [Jobshet 8- Bubble and Insertion Sort](https://github.com/NajwaKurnia/praktikum-struktur-data/tree/main/job-8%20bubble%20and%20insertion%20sort)

#### Pengertian Pengurutan Data
Pengurutan data adalah salah satu proses yang banyak dijumpai dalam aplikasi dengan menggunakan komputer. Pengurutan membuat data disusun dalam keadaan urut menurut aturan tertentu, misal dari nilai kecil ke nilai terbesar untuk bilangan atau dari A-Z untuk string. Data yang telah diurutkan dalam sebuah laporan memudahkan kita untuk dibaca dan dipahami oleh si pemakai.

#### Teknik Pengurutan Data
Beberapa teknik terkenal untuk mengurutkan data, yaitu buble sort, insertion sort, selection sort, mergesort, heapsort, dan binary sort. Tiga yang pertama dikenal sebagai cara pengurutan dasar.
1. Bubble sort<br>
  ![bubble](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/06180dde-a82b-4f45-8c0f-86ffaaacd12c)
   
   Bubble sort adalah salah satu algoritma untuk sorting data, atau kata lainnya mengurutkan data dari yang terbesar ke yang terkecil atau sebaliknya. Bubble sort adalah metode/algoritma pengurutan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan.
2. Insertion sort<br>
   ![insert](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/6b55406e-5b1c-4173-8f46-24bfe79e0cf5)

   Insertion sort bekerja sama halnya dengan saat kita bermain mengurutkan kartu di tangan. Insertion sort adalah sebuah algoritma yang meletakkan sebuah data/elemen yang belum urut pada tempat yang cocok pada setiap siklus pengurutan.
***
## [Jobshet 9-Selection and Merge Sort](https://github.com/NajwaKurnia/praktikum-struktur-data/tree/main/job-9%20selection%20and%20merge%20sort)

#### Selection Sort
![selection](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/5f4099c6-552b-4da6-8b40-99f4da81cdd7)

Selection sort adalah sebuah algoritma yang digunakan untuk mencari dan memilih elemen/data terkecil dalam sebuah list yang belum tersusun dalam setiap iterasi dan menempatkan elemen terkecil di urutan paling depan dari urutan list data.<br>
Cara kerja Selection sort:<br>
1. Tentukan elemen pertaman dari urutan menjadi elemen terkecil masukkan sebagai elemen "minimum".
2. Bandingkan minimum dengan urutan elemen kedua. Jika elemen kedua lebih kecil dibandingkan minimum, jadikan elemen kedua sebagai minimum. Bandingkan kembali minimum dengan elemen ketiga. Lakukan secara terus menerus sampai dengan elemen yang terakhir.
3. Setelah setiap perulangan, minimum ditempatkan di paling depan urutan list data.
4. Pada setiap pengulangan, indeksasi (pemberian alamat) dimulai dari elemen pertama dari  list. Langkah 1-3 dilakukan berulang kali sampai keseluruhan elemen digantikan pada posisi yang terurut.

#### Merge Sort
![merge](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/6d8f183f-b686-469c-9efa-7e40fe71f755)

Merge sort adalah sebuah teknik pengurutan berdasarkan teknik membagi dan menggabungkan (divide and conquer). Menggunakan merge sort hal pertama yang dilakukan adalah membagi sama banyak data kemudian menggabungkannya dalam list data yang terurut.

#### Divide and Conquer strategy
Menggunakan teknik Divide and Conquer, langkah pertama bagi sebuah permasalahan menjadi sub bagian kecil permasalahan. Di saat sub permasalahan telah diselesaikan dan siap, gabungkan hasil dari sub permasalahan untuk memecahkan masalah utama.
***
## [Jobsheet 10-Shell and Quick sort](https://github.com/NajwaKurnia/praktikum-struktur-data/tree/main/job-10%20shell%20and%20Quick%20short)

#### Shell sort
![shell](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/40a2c59c-0ca3-46c4-b452-6be82a18879e)

Shell sort adalah sebuah algoritma dengan pengurutan elemen pertama memiliki jarak interval dengan elemen yang akan dibandingkan. pada prinsipnya sama dengan insertion sort. Dalam pengurutan Shell sort, elemen/data diurutkan dengan interval yang terukur.Jarak interval diantara elemen semakin lama semakin mengecil berdasarkan berapa kali pengulangan pengurutan dilakukan.<br>
Beberapa macam formula urutan yang digunakan:
- Shell's original sequence: N/2, N'4, ..., 1
- Knuth's increment: 1, 4, 13, ..., (3k-1)/2
- Sedgewick's increment: 1, 8, 23, 77, 281, 1073, 4293, 16577, ..., 4j+1+3.2j+1.<br>
Cara kerja Shell sort:
1. Urutkan array yang ada.
2. Menggunakan formula original shell (N/2, N/4, ...1) sebagai interval yang akan digunakan dalam algoritma.<br>
   Pada fase pertama, jika besar array N=8 maka jarak interval elemen menggunakan     rumus N/2=4, akan dibandingkan dan ditukar jika belum sesuai urutan.
  - Elemen indeks ke 0 dibandingkan dengan indeks elemen ke 4.
  - Jika elemen ke 0 (elemen 0 lebih besar daripada ke 4 lalu elemen ke 4             disimpan ke dalam variabel temp dan elemen ke 0 (elemen 0 nilai lebih besar)      dipindahkan ke posisi elemen ke 4 dan elemen yang disimpan dalam variabel         temp pindahkan ke posisi ke 0.
3. Pada pengulangan kedua rumus formula interval yang digunakan N/4=8/4=2.
4. proses yang sama berlaku untuk elemen yang tersisa.
5. Pada akhirnya sampai pada fase akhir di saat interval N/8=8/8=1, elemen dengan interval 1 diurutkan.<br>
Implementasi program Shell sort.<br>
Shell sort digunakan saat:
- uClibc library menggunakan pengurutan ini.
- bzip2 compressor menggunakan algoritma ini juga.
- pengurutan insertion kurang baik saat elemen yang dekat berjauhan. Shell sort membantu dalam mengurangi jarak pertukaran elemen data sehingga terjadi pengurangan data yang akan di tukar.

#### Quick sort
![quick](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/7313bd5b-feeb-4751-99b3-f50f850087c5)

Seperti halnya Merge sort, Quick sort menggunakan algoritma divide dan conquer. Algoritma ini mengambil sebuah elemen sebagai pivot dan memisahkan array yang ada disekitar pivot. Terdapat banyak versi dari Quick sort yang mengambil pivot dengan cara yang berbeda-beda. Diantaranya:
1. Selalu mengambil elemen pertama sebagai pivot.
2. Selalu mengambil elemen terakhir sebgai pivot.
3. Elemen acak sebagai pivot.
4. Elemen yang ditengah sebagai pivot.<br>
Kunci dari proses quick sort adalah partisi(). Targetdari partisi adalah array sebuah array dan sebuah elemen x dari array sebagai pivot, letakkan x pada posisi yang benar dalam array yang terurut dan letakkan semua elemen yang lebih kecil (lebih kecil dari x) sebelum elemn x, dan tempatkan semua elemen yang lebih besar dari x setelah x.
***
## [Jobsheet 11-Linear search and Binary search](https://github.com/NajwaKurnia/praktikum-struktur-data/tree/main/job-11%20Linear%20and%20Binary%20search)

Algoritma penacarian adalah algoritma yang menerima sebuah argumen kunci dan dengan langkah-langkah tertentu akan mencari rekaman dengan kunci tersebut. Setelah proses pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan atau tidak ditemukan.<br>
Ada dua macam teknik pencarian yaitu pencarisan sekuensial dan pencarian biner. Perbedaan dari dua teknik ini terletak pada keadaan data. Pencarian biner digunakan apabila data dalam keadaan acak atau tidak terurut. Pencarian biner data yang sudah dalam keadaan terurut.<br>

#### Linear search
![linear search](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/0f63f4d5-a7b1-4743-a0a9-a6788656377f)

Algoritma pencarian dapat dijelaskan sebagi berikut:<br>
Pencarian dimulai dari data paling awal, kemudian ditelusuri dengan menaikkan indeks data, apabila data sama dengan kunci pencarian dihetikan dan diberikan nilai pengembalian true, apabila sampai indeks terakhir data tidak diteukan maka diberikan nilai pengembalian false.<br>
Algoritma pencarian berurutan dapat dituliskan sebagai berikut:<br>
1. i <- 0
2. ketemu <- false
3. Selama (tidak ketemu) dan (i <= N)kerjakan baris 4
4. Jika(data[i]=x) maka ketemu <- true, jika tidak i <- i+1
5. Jika(ketemu) maka i adalah indeks dari data yang dicari, jika tidak data tidak ditemukan.

#### Binary search
![binary](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/3278f45c-a9fc-49b3-8dba-4f094e6ce3fa)

Salah satu syarat agar pencarian biner dapat dilakukan adalah data udah dalam keadaan terurut. Dengan kata lain, apabila data belum dalam keadaan urut, pencarian biner tidak dapat dilakukan.<br>
Algoritma binary search:<br>
1. Data diambil dari posisi 1 sampai posisi akhir N.
2. Kemudian cari posisi data tengah dnegan rumus: (posisi awal+ posisi akhir)/2.
3. Kemudian data yang dicari dibandingkan dengan cata yang ditengah, apakah sama atau lebih kecil, atau lebih besar.
4. Jika lebih besar, maka proses pencarian dicari dengan posisi awal adalah posisi tengah + 1.
5. Jika lebih kecil, maka proses pencarian dicari dengan posisi akhir adalah posisi tengah - 1.
6. Jika data sama, berarti ketemu.
***
## [Jobsheet-12 Tree](https://github.com/NajwaKurnia/praktikum-struktur-data/tree/main/job-12%20Tree)

#### Tree Traversal
![tree traversal](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/c367110a-2cce-4b11-a763-9daca6c45ee6)

Traverse atau melintasi sebuah pohon data/tree artinya mengunjungi semua simpul yang ada pada pohon tersebut. Ada beberapa hal yang dapat dilakukan contoh jika ingin menambah nilai semua data pada pohon tersebut atau mencari nilai tertinggi diantaranya. Untuk operasi-operasi tersebut, harus dilakukan mengunjungi setiap simpul dari pohon data.<br>
Struktur data linear seperti array, stack/tumpukan, queues/antrian dan LinkedList hanya memiliki satu jalan untuk membaca sebuah data. Berbeda dengan struktur data yang bentuknya hirarki seperti tree/pohon dapat dijelajahi dnegan berbagai cara.<br>
Tujuan mengunjungi dan mendata setiap simpul/node, yang harus dilakukan adalah mengunjungi semua node/simpul di dalam subtree, mengunjungi root node atau node paling atas dan mengunjungi node yang ada di kanan subtree.<br>
Berdasarkan urutan yang akan dilakukan, terdapat 3 cara melintasi tree tersebut:
1. Inorder Traversal, langkah-langkahnya:<br>
   - Kunjungi semua nodes/simpul disebelah kiri subtree.
   - Kemudian kunjungi root node/simpul paling atas.
   - Kunjungi semua simpul yang ada di kanan subtree.
2. Preorder Traversal
   - Visit root node.
   - Visit all the node in the left subtree.
   - Visit all the ode in the right subtree.
3. Post order Traversal
   - Visit all the nodes in the left subtree.
   - Visit all the nodes in the right subtree.
   - Visit the root node.
***
## [Jobsheet-13 Graphs](https://github.com/NajwaKurnia/praktikum-struktur-data/tree/main/job-13%20Graphs)

#### Depth First Search/Traversal
![graph dfs](https://github.com/NajwaKurnia/praktikum-struktur-data/assets/153745958/7fa7ee74-c096-4998-9820-be8a46939bfb)

Traversal artinya mengunjungi semua simpul/node dari sebuah graph. DFS atau DFT adalah sebuah algoritma pencarian rekursif untuk mencari semua titik yang ada pada sebuah graph atau pohon simpul.<br>

Algoritma DFS.<br>
Implementasi sederhana dari sebuah DFS adalah membagi setiap titik pada sebuah graph atau tree menjadi 2 kategori:<br>
1. Visited
2. Not Visited
Tujuan dari algoritma ini adalah untuk menandai setiap titik/vertex yang telah dikunjungi sambil menghindari titik yang telah dikunjungi.<br>

Cara kerja algoritma DFS:<br>
1. Dimulai dengan meletakkan salah satu dari titik graph di atas sebuah tumpukan.
2. Ambil item paling atas dari tumpukan dan tambahkan dalam daftar titik yang telah dikunjungi.
3. Buatlah sebuah daftar titik yang segaris lurus dengannya. Tambahkan satu yangmana belum dikunjungi pada tumpukan paling atas.
4. Ulangi langkah ke 2 dan 3 sampai dengan tumpukan menjadi kosong.

