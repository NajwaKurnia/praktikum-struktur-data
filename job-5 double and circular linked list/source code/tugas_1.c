#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Buku{
    char judul[100];
    char penulis[100];
    int year;
    struct Buku* next;
    struct Buku* prev;
};
struct Buku* createNode(char judul[], char penulis[], int year){
    struct Buku* newNode= (struct Buku*)malloc(sizeof(struct Buku));
    strcpy(newNode->judul, judul);
    strcpy(newNode->penulis, penulis);
    newNode->year=year;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void insertNode(struct Buku** head, struct Buku* newNode){
    if(*head == NULL){
        *head = newNode;
    }else{
        struct Buku* current= *head;
        while(current->next != NULL){
            current=current->next;
        }
    current->next=newNode;
    newNode->prev=current;
    }
}
struct Buku* searchNode(struct Buku* head, char judul[]){
    struct Buku* current=head;
    while(current != NULL){
        if(strcmp(current->judul, judul)==0){
            return current;
        }
        current=current->next;
    }
    return NULL;
}
void deleteNode(struct Buku** head, char judul[]){
    struct Buku* current=*head;
    struct Buku* prev=NULL;
    while(current != NULL && strcmp(current->judul, judul)!= 0){
        prev=current;
        current= current->next;
    }
    if(current != NULL){
        if(prev == NULL){
            *head = current->next;
        }else{
            prev->next=current->next;
        }
        if(current->next != NULL){
            current->next->prev=prev;
        }
        free(current);
        printf("\nBuku dengan judul '%s' telah dihapus.\n", judul);
    }else{
        printf("\nBuku dengan judul '%s' tidak ditemukan.\n", judul);
    }
}
void displayList(struct Buku* head){
    struct Buku* current=head;
    printf("\nDaftar buku dalam perpustakaan:\n");
    while(current != NULL){
        printf("Judul: %s\n", current->judul);
        printf("Pengarang: %s\n", current->penulis);
        printf("Tahun: %d\n", current->year);
        printf("\n");
        current=current->next;
    }
}
void freeList(struct Buku** head){
    struct Buku* current= *head;
    struct Buku* next;
    while(current != NULL){
        next=current->next;
        free(current);
        current=next;
    }
    *head=NULL;
}
int main(){
    struct Buku* perpustakaan=NULL;
    insertNode(&perpustakaan, createNode("Data Comunications and Networking", "Behrouz A.Forouzan", 2007));
    insertNode(&perpustakaan, createNode("struktur data dan algoritma", "Michael T. Goodrich", 2011));
    insertNode(&perpustakaan, createNode("pemrograman C", "Dennis Ritchie", 1978));
    displayList(perpustakaan);
    deleteNode(&perpustakaan, "pemrograman C");
    displayList(perpustakaan);
    freeList(&perpustakaan);
    return 0;
}