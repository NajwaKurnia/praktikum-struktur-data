#include <stdio.h>
#include <string.h>
struct mahasiswa{
    int nim;
    char nama[50];
    char ttl[50];
    float ipk;
};
int sequentialSearch(struct mahasiswa data[], int n, int key){
    for(int i=0; i<n; ++i){
        if(data[i].nim == key){
            return i;
        }
    }
    return -1;
}
int binarySearch(struct mahasiswa data[], int left, int right, int key){
   while(left<= right){
    int mid= left+(right-left)/2;
    if(data[mid].nim==key)
        return mid;
    if(data[mid].nim<key)
        left=mid+1;
    else   
        right= mid-1;
   }
   return -1;
}
int main(){
    struct mahasiswa data[3]={
        {12, "Najwa", "3 januari 2005", 3.75},
        {13, "kurnia", "4 januari 2004", 3.59},
        {14, "meilati", "9 mei 2006", 3.86},
    };
    int n=sizeof(data)/ sizeof(data[0]);
    int cariNim=13;
    int seqResult= sequentialSearch(data, n, cariNim);
    if(seqResult!= -1){
        printf("\nsequential search\n");
        printf("mahasiswa dengan NIM %d ditemukan pada indeks %d dari indeks 0\n", cariNim, seqResult);
        printf("Nama: %s\n", data[seqResult].nama);
        printf("TTL : %s\n", data[seqResult].ttl);
        printf("IPK : %.2f\n", data[seqResult].ipk);
    }else{
        printf("\nSequential search\nMahasiswa dengan nim%d tidak ditemukan.\n", cariNim);
    }
    int binResult= binarySearch(data, 0, n-1, cariNim);
    if(binResult != -1){
        printf("\nBinary Search\nMahasiswa dengan NIM %d ditemukan pada indeks %d dari indeks 0\n", cariNim, binResult);
        printf("Nama: %s\n", data[binResult].nama);
        printf("TTL: %s\n", data[binResult].ttl);
        printf("IPK: %.2f\n", data[binResult].ipk);
    } else {
        printf("\nBinary Search: Mahasiswa dengan NIM %d tidak ditemukan.\n", cariNim);
    }
    return 0;
}