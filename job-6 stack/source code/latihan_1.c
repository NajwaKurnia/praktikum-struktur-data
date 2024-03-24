#include <stdio.h>
#include <stdlib.h>
int MAXSIZE= 8;
int stack[8];
int top =-1;
int isempty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(){
    if(top==MAXSIZE-1){
        return 1;
    }else{
        return 0;
    }
}
int peek(){
    return stack[top];
}
int pop(){
    int data;
    if(! isempty()){
        data= stack[top];
        top= top - 1;
        return data;
    }else{
        printf("Tidak dapat mengambil data, stack kosong.\n");
        return -1;
    }
}
int push(int data){
    if(! isfull()){
        top= top+1;
        stack[top]=data;
    }else{
        printf("Tidak dapat menambahkan data. stack penuh\n");
    }
}
int main(){
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    printf("Elemen teratas pada stack adalah: %d\n", peek());
    printf("\nSemua elemennya adalaha: \n");
    while(! isempty()){
        int data = pop();
        printf("%d\n", data);
    }
    printf("\nStack full: %s\n", isfull()? "true": "false");
    printf("\nStack empty: %s\n", isempty()? "true":"false");
    return 0;
}