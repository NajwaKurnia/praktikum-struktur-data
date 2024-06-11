#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char id[20];
    char nama[50];
    int stok;
    float harga;
}Barang;
typedef struct Simpul{
    struct Simpul* berikutnya;
    Barang data;
}Simpul;
Simpul* kepala=NULL;
void tambahBarang(char id[20], char nama[50], int stok, float harga){
    Simpul* simpulBaru = (Simpul*)malloc(sizeof(Simpul));
    if(simpulBaru==NULL){
        printf("\nGagal mengalokasikan memori untuk barang baru.\n");
        return;
    }
    strcpy(simpulBaru->data.id, id);
    strcpy(simpulBaru->data.nama, nama);
    simpulBaru->data.stok = stok;
    simpulBaru->data.harga = harga;
    simpulBaru->berikutnya= kepala;
    kepala = simpulBaru;
    printf("\nBarang dengan ID %s telah ditambahkan.\n", id);
}
void tampilkanBarang(){
    Simpul* saatIni = kepala;
    if(saatIni != NULL){
        printf("\n====== DATA BARANG ======\n");
        printf("_____________________________________________________\n");
        printf(" ID  |    Nama Barang    |  Stok Barang  |  Harga   |\n" );
        printf("=====================================================\n");
        while(saatIni != NULL){
            printf("%s   |  %s                         | %d            | %.2f", saatIni->data.id, saatIni->data.nama, saatIni->data.stok, saatIni->data.harga);
            printf("\n");
            saatIni = saatIni->berikutnya;
        }
    }else{
        printf("\n===== BARANG KOSONG =====\n");
    }
}
void pengurutanBubble(){
    int tukar;
    Simpul* lptr=NULL;
    Simpul* ptr1;
    if(kepala==NULL)
        return;
    do{
        tukar=0;
        ptr1=kepala;
        while(ptr1->berikutnya != lptr){
            if(strcmp(ptr1->data.id,  ptr1->berikutnya->data.id)>0){
                Barang tampung= ptr1->data;
                ptr1->data= ptr1->berikutnya->data;
                ptr1->berikutnya->data = tampung;
                tukar=1;
            }
            ptr1=ptr1->berikutnya;
        }
        lptr=ptr1;
    }while(tukar);
}
Simpul* pencarianLinear(char id[20]){
    Simpul* saatIni = kepala;
    while(saatIni != NULL){
        if(strcmp(saatIni->data.id, id)==0){
            return saatIni;
        }
        saatIni= saatIni->berikutnya;
    }
    return NULL;
}
void hapusBarang(char id[20]){
    Simpul *saatIni = kepala;
    Simpul *sebelumnya= NULL;
    while(saatIni != NULL){
        if(strcmp(saatIni->data.id, id)==0){
            if(sebelumnya == NULL){
                kepala = saatIni->berikutnya;
            }else{
                sebelumnya->berikutnya= saatIni->berikutnya;
            }
            free(saatIni);
            printf("Barang dengan ID %s telah dihapus.\n", id);
            return;
        }
        sebelumnya=saatIni;
        saatIni= saatIni->berikutnya;
    }
    printf("Barang dengan ID %s tidak diteukan.\n", id);
}
void editBarang(char id[20], char nama[50], int stok, float harga){
    Simpul* saatIni = kepala;
    while(saatIni != NULL){
        if(strcmp(saatIni->data.id, id)==0){
            strcpy(saatIni->data.nama, nama);
            saatIni->data.stok = stok;
            saatIni->data.harga = harga;
            printf("barang dengan ID %s telah diedit.\n", id);
            return;
        }
        saatIni=saatIni->berikutnya;
    }
    printf("Barang dengan ID %s tidak ditemukan.\n", id);
}
int main(){
    int pilihan, stok;
    char id[20];
    float harga;
    char nama[50];
    system("cls");
    do{
        printf("\n======= MANAJEMEN BARANG TOKO =======\n");
        printf("\n1. Tambah barang");
        printf("\n2. Tampilkan Barang");
        printf("\n3. Urutkan Barang");
        printf("\n4. Cari Barang");
        printf("\n5. Edit Barang");
        printf("\n6. Hapus Barang");
        printf("\n7. Keluar");
        printf("\nSilahkan pilih yang ingin dilakukan-> ");
        scanf("%d", &pilihan);
        switch(pilihan){
            case 1:
                system("cls");
                printf("\n======= INPUT BARANG TOKO =======\n");
                printf("\nMasukkan ID barang: "); scanf("%s", id);
                printf("\nMasukkan nama barang: "); fflush(stdin), fgets(nama, sizeof(nama), stdin); 
                printf("\nMasukkan jumlah barang: "); scanf("%d", &stok);
                printf("\nMasukkan harga barang: "); scanf("%f", &harga);
                tambahBarang(id, nama, stok, harga);
                break;
            case 2:    
                tampilkanBarang();
                break;
            case 3:
                pengurutanBubble();
                printf("\nBarang telah diurutkan.\n");
                break;
            case 4:
                system("cls");
                printf("\nMasukkan ID barang yang ingin dicari: ");
                scanf("%s", id);
                Simpul* hasilpencarian = pencarianLinear(id);
                if(hasilpencarian != NULL){
                    printf("\nBarang dengan ID %s ditemukan: %s\nStok: %d\n", id, hasilpencarian->data.nama, hasilpencarian->data.stok);
                }else{
                    printf("\nBarang dengan ID %s tidak ditemukan.\n", id);
                }
                break;
            case 5:
                system("cls");
                printf("\nMasukkan ID barang yang ingin diedit: "); scanf("%s", id);
                printf("\nMasukkan nama barang baru: "); scanf("%s", nama);
                printf("\nMasukkan jumlah barang: "); scanf("%d", &stok);
                printf("\nMasukkan harga baru: "); scanf("%f", &harga);
                editBarang(id, nama, stok, harga);
                break;
            case 6:
                system("cls");
                printf("\nMasukkan ID barang yang ingin dihapus: ");
                scanf("%s", id);
                hapusBarang(id);
                break;
            case 7:
                printf("\nKeluar...\n");
                break;
            default:
                printf("\nPilihan tidak valid.\n");
                break;
        }
    }while(pilihan != 7);
    return 0;
}