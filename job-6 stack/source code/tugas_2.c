#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

struct Stack {
    char data;
    struct Stack* next;
};

struct Stack* top = NULL;

int isempty() {
    return top == NULL;
}

void push(char data) {
    struct Stack* newNode = (struct Stack*)malloc(sizeof(struct Stack));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

char pop() {
    if (isempty()) {
        printf("Stack is empty!\n");
        return '\0';
    }
    struct Stack* temp = top;
    char data = temp->data;
    top = top->next;
    free(temp);
    return data;
}

void balikkanKata(char* string) {
    for (int i = 0; i < strlen(string); i++) {
        push(string[i]);
    }

    printf("Kata terbalik: ");
    while (!isempty()) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    int choice;
    char kata[MAX_LENGTH];

    do {
        printf("\n*** Menu ***\n");
        printf("1. Input Kata\n");
        printf("2. Balik Kata\n");
        printf("3. Exit\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan kata: ");
                scanf("%s", kata);
                break;
            case 2:
                if (strlen(kata) == 0) {
                    printf("Kata belum diinputkan!\n");
                } else {
                    printf("Kata asli: %s\n", kata);
                    balikkanKata(kata);
                }
                break;
            case 3:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 3);

    return 0;
}
