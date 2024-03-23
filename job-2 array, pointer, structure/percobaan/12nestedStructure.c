#include <stdio.h>
struct complex{
    int imag;
    float real;
};
struct number{
    struct complex comp;
    int integers;
}num1, num2;
int main(){
    num1.comp.imag = 5;
    num1.comp.real = 3.14;
    num1.integers = 10;

    num2.comp.imag = 7;
    num2.comp.real = 2.718;
    num2.integers = 20;
    printf("\nnum1: imag = %d, real = %f, integers = %d\n", num1.comp.imag, num1.comp.real, num1.integers);
    printf("\nnum2: imag = %d, real = %f, integers = %d\n", num2.comp.imag, num2.comp.real, num2.integers);

    return 0;
}