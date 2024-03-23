#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *fibonnaci;

    printf("\nMasukkan nilai n: "); scanf("%d", &n);
    fibonnaci=(int *)malloc(n * sizeof(int));
    if(fibonnaci == NULL){
        printf("Gagal mengalokasikan memori\n");
        return 1;
    }
    fibonnaci[0]=0;
    fibonnaci[1]=1;
    for(int i=2; i<n; i++){
        fibonnaci[i]=fibonnaci[i-1]+fibonnaci[i-2];
    }
    printf("\nBilangan fibonacci pertama sampai ke-%d:\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", fibonnaci[i]);
    }
    
    free(fibonnaci);
    return 0;
}