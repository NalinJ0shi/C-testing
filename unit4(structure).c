#include<stdio.h>
#include<string.h>
// struct Complex{
//     float real;
//     float imag;
// };

// struct Complex complexAdd(struct Complex a, struct Complex b){
//     struct Complex result;
//     result.real = a.real + b.real;
//     result.imag = a.imag + b.imag;
//     return result;
// }

// int main(){
//     struct Complex a, b, sum;
//     printf("Enter the real and imaginary parts of the first complex number: ");
//     scanf("%f %f", &a.real, &a.imag);
//     printf("Enter the real and imaginary part of the second complex number: ");
//     scanf("%f %f", &b.real, &b.imag);
//     sum = complexAdd(a, b);
//     printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);
//     return 0;
// }
struct student {
    int rollno;
    char name[20];
    float score;
};

int main() {
    struct student s[5];
    int n;
    struct student temp;

    printf("Enter number of students (<=5): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Score: ");
        scanf("%f", &s[i].score);
    }

    // Sorting by score (descending order)
    // for(int i = 0; i < n-1; i++) {
    //     for(int j = i+1; j < n; j++) {
    //         if(s[i].score < s[j].score) {
    //             temp = s[i];
    //             s[i] = s[j];
    //             s[j] = temp;
    //         }
    //     }
    // }
    for(int i = 0; i < n; i++) {
            if(s[i].score > 75){
                printf("Rollno: %d", s[i].rollno);
        }
    }

    printf("\n(highest score first):\n");
    for(int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Score: %.2f\n",
               s[i].rollno, s[i].name, s[i].score);
    }

    return 0;
}
