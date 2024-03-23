#include <stdio.h>
struct person{
    int age;
    float weight;
};
int main(){
    struct person *personPtr, person1;
    personPtr=&person1;
    printf("\nEnter age: ");
    scanf("%d", &personPtr->age);
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);
    printf("\nDisplaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %.2f\n", personPtr->weight);
    return 0;
}