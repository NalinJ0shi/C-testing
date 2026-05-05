#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *input, *odd, *even;
    int num;
    
    // Open INPUT file for reading
    input = fopen("txtfile/INPUT.txt", "r");
    odd = fopen("txtfile/ODD.txt", "w");
    
    // Open EVEN file for writing
    even = fopen("txtfile/EVEN.txt", "w");

    // Read numbers from INPUT and distribute to ODD/EVEN
    while (fscanf(input, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(even, "%d\n", num);
        } else {
            fprintf(odd, "%d\n", num);
        }
    }
    
    // Close all files
    fclose(input);
    fclose(odd);
    fclose(even);
    
    printf("Numbers separated successfully!\n");
    printf("Odd numbers written to ODD file\n");
    printf("Even numbers written to EVEN file\n");
    
    return 0;
}

// int main() {
//     FILE *ready, *copen;
//     char *filename_in = "txtfile/text.txt";
//     char *filename_out = "txtfile/newfile.txt";
//     int x;
    
//     ready = fopen(filename_in, "r"); 
//     copen = fopen(filename_out, "w");
    
//     while ((x = fgetc(ready)) != EOF) {//end of file
//         fputc(toupper(x), copen);//toupper converting to uppercase
//     }
    
//     fclose(ready);
//     fclose(copen);
    
//     printf("File conversion completed successfully!\n");
    
//     return 0;
// }

// int main()
// {
//     //reading from a file
//     FILE * file;
//     file = fopen("txtfile/text.txt", "r");
//     char content[2000];
//     if (file != NULL){
//         fgets(content, 2000, file);
//         printf("content: %s", content);     
//     }
//     //writing to a file
//     // file = fopen("newfile.txt", "w");

//     // fputs("Hello World", file);
//     // fclose(file);
//     return 0;
// }