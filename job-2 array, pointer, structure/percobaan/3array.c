#include <stdio.h>
int main(){
    int n;
    int angka[5];

    printf("Masukkan banyaknya bilangan: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Masukkan angka ke %d :", i+1);
        scanf("%d", &angka[i]);
    }
    for(int i=0; i<n; i++){
        printf("angka ke %d : %d\n", i+1, angka[i]);
    }
    getchar();
    return 0;
}
