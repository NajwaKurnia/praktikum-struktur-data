#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 50
struct Mahasiswa{
    char nim[20];
    char nama[50];
    float nilai;
};
struct Mahasiswa stack[MAXSIZE];
int top=-1;
int isempty(){
    return top== -1;
}
int isfull(){
    return top==MAXSIZE-1;
}
void push(struct Mahasiswa data){
    if(! isfull()){
        top++;
        stack[top]=data;
        printf("Data mahasiswa berhasil ditambahkan.\n");
    }else{
        printf("Stack penuh, tidak dapat menmabahkan data.\n");
    }
}
struct Mahasiswa pop(){
    struct Mahasiswa temp;
    if(! isempty()){
        temp =stack[top];
        top--;
        printf("Data mahasiswa berhasil dihapus.\n");
        return temp;
    }else{
        printf("\nStack kosong, tidak ada data yabg bisa dihapus.\n");
        strcpy(temp.nim, "");
        strcpy(temp.nama, "");
        temp.nilai=0.0;
        return temp;
    }
}
void display(){
    if(! isempty()){
        printf("\nData mahasiswa dalam stack:\n");
        for(int i=top; i>=0; i--){
            printf("\nNim: %s\n Nama: %s\n Nilai: %.2f\n", stack[i].nim, stack[i].nama, stack[i].nilai);
        }
    }else{
        printf("\nStack kosong, tidak ada data yang ditampilkan.\n");
    }
}
int compare(const void *a, const void *b){
    float nilaiA=(*(struct Mahasiswa *)a).nilai;
    float nilaiB=(*(struct Mahasiswa*)b).nilai;
    return (nilaiA-nilaiB);
}
void sort(){
    if(! isempty()){
        struct Mahasiswa tempstack[MAXSIZE];
        int size=top+1;
        for(int i=0; i<size; i++){
            tempstack[i]=pop();
        }
        qsort(tempstack, size, sizeof(struct Mahasiswa), compare);
        for(int i=0; i<size; i++){
            push(tempstack[i]);
        }
        printf("Data mahasiswa berhasil diurutkan berdasarkan nilai.\n");
    }else{
        printf("Stack kosong. tidak ada data yang bisa diurutkan.\n");
    }
}
int main(){
    int pilihan;
    struct Mahasiswa data;
    do{
        printf("\nINPUT DATA MAHASISWA\n");
        printf("\n\t*** Menu ***\n");
        printf("1. Push\n2. pop\n3. Display\n4. sort\n5. exit\n");
        printf("Masukkan pilihan=> ");
        scanf("%d", &pilihan);
        getchar();
        switch(pilihan){
            case 1:
                printf("Masukkan Nim: "); scanf("%s", data.nim);
                printf("Masukkan nama: "); fflush(stdin), fgets(data.nama, sizeof(data.nama), stdin);
                printf("Masukkan nilai: "); scanf("%f", &data.nilai);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                sort();
                break;
            case 5:
                printf("Terima kasih!\n");
                break;
            default:
                printf("\nPilihan tidak valid. Silahkan pilih kembali.\n");
        }
    }while(pilihan !=5);
    return 0;
}