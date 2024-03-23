#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Mobil{
    char noPol[20];
    char merkMbl[50];
    char namaPemilik[50];
    struct Mobil* next;
    struct Mobil* prev;
};
struct Mobil* createNode(char nopol[], char merkMbl[], char namaPemilik[]){
    struct Mobil* newNode=(struct Mobil*)malloc(sizeof(struct Mobil));
    strcpy(newNode->noPol, nopol);
    strcpy(newNode->merkMbl, merkMbl);
    strcpy(newNode->namaPemilik, namaPemilik);
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void antrian(struct Mobil** head, struct Mobil** tail, struct Mobil* newNode){
    if(*head==NULL){
        *head = *tail=newNode;
    }else{
        (*tail)->next=newNode;
        newNode->prev=*tail;
        *tail=newNode;
    }
}
void antrianDepan(struct Mobil** head, struct Mobil** tail){
    if(*head==NULL){
        printf("Antrian kosong.\n");
    }else{
        struct Mobil* temp= *head;
        *head=(*head)->next;
        if(*head != NULL){
            (*head)->prev=NULL;
        }else{
            *tail=NULL;
        }
        printf("\nMobil engan plat '%s' telah keluar dari antrian.\n");
        free(temp);
    }
}
void displayAntrian(struct Mobil* head){
    struct Mobil* current=head;
    printf("\nAntrian mobil di perparkiran:\n");
    while(current != NULL){
        printf("Nomor plat: %s\n", current->noPol);
        printf("Merk: %s\n", current->merkMbl);
        printf("Nama pemilik: %s\n", current->namaPemilik);
        printf("\n");
        current=current->next;
    }
}
void freeAntrian(struct Mobil** head, struct Mobil** tail){
    struct Mobil* current =*head;
    struct Mobil* next;
    while(current != NULL){
        next=current->next;
        free(current);
        current=next;
    }
    *head= *tail=NULL;
}
int main(){
    struct Mobil* tempatParkirHead=NULL;
    struct MObil* tempatParkirTail=NULL;
    antrian(&tempatParkirHead, &tempatParkirTail, createNode("243656", "Mobil A", "si A"));
    antrian(&tempatParkirHead, &tempatParkirTail, createNode("763488", "Mobil B", "si B"));
    antrian(&tempatParkirHead, &tempatParkirTail, createNode("093748", "Mobil C", "si C"));
    displayAntrian(tempatParkirHead);
    antrianDepan(&tempatParkirHead, &tempatParkirTail);
    displayAntrian(tempatParkirHead);
    freeAntrian(&tempatParkirHead, &tempatParkirTail);
    return 0;
}