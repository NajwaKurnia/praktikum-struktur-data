#include <stdio.h>
typedef struct mahasiswa{
    char nama[50];
    char jurusan[50];
    int nilai;
}data;
int main(void){
    data mhs01;

    strcpy(mhs01.nama, "Najwa kurnia");
    strcpy(mhs01.jurusan, "Elektronika");
    mhs01.nilai=100;

    printf("%s adalah mahasiswa jurusan %s ", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai UAS %i \n",mhs01.nilai);
    return 0;
}