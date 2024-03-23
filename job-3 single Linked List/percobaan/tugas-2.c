#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int data;
    struct node *next;
}Node;
Node *head=NULL;

void addNode(int data){
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head== NULL){
        head=newNode;
    }else{
        Node *temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void printPrima(){
    Node *temp=head;
    while (temp !=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
void reallocList(int m){
    Node *temp=head;
    int count=0;
    while(temp !=NULL){
        count++;
        temp=temp->next;
    }
    head = (Node *)realloc(head, m * sizeof(Node));
    for(int i=count; i<m; i++){
        addNode(0);
    }
}
int main(){
    int n,m;
    printf("masukkan nilai n: "); scanf("%d", &n);

    for(int i=2; i<=n; i++){
        int prima=1;
        for(int j=2; j * j<=i; j++){
            if(i %j==0){
                prima=0;
                break;
            }
        }
        if(prima){
            addNode(i);
        }
    }
    printf("Bilangan prima pertama sampai ke-%d:\n", n);
    printPrima();
    printf("\nMasukkan nilai m (ukuran memori baru): "); scanf("%d", &m);
    reallocList(m);
    for(int i=n+1; i<=m; i++){
        int prima=1;
        for(int j=2; j * j<=i; j++){
            if(i%j==0){
                prima=0;
                break;
            }
        }
        if (prima){
            addNode(i);
        }
    }
    printf("\nBilangan prima baru:\n");
    printPrima();
    return 0;
}