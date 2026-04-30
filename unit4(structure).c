#include<stdio.h>

struct Complex{
    float real;
    float imag;
};

struct Complex complexAdd(struct Complex a, struct Complex b){
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main(){
    struct Complex a, b, sum;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter the real and imaginary part of the second complex number: ");
    scanf("%f %f", &b.real, &b.imag);
    sum = complexAdd(a, b);
    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}