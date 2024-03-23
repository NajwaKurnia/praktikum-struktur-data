#include <stdio.h>
typedef struct{
    int nim;
    char nama[50];
    char tanggalLahir[50];
    float IPK;
}mahasiswa;
mahasiswa MHS;
void inputData(){
    printf("\nInput data mahasiswa\n");
    printf("NIM : "); scanf("%d", &MHS.nim);
    printf("Nama: "); fflush(stdin), fgets(MHS.nama, 50, stdin);
    printf("Tanggal Lahir: "); fflush(stdin), fgets(MHS.tanggalLahir, 50, stdin);
    printf("IPK : "); scanf("%f", &MHS.IPK);
}
void tampilkanData(){
    printf("\tData anda\n");
    printf("Nim : %d\n", MHS.nim);
    printf("Nama: %s", MHS.nama);
    printf("Tanggal lahir: %s", MHS.tanggalLahir);
    printf("IPK : %.2f", MHS.IPK);
}
int main(){
    inputData();
    tampilkanData();
    return 0;
}
