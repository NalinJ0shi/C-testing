#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *ready, *copen;
    char *filename_in = "txtfile/text.txt";
    char *filename_out = "txtfile/newfile.txt";
    int x;
    
    ready = fopen(filename_in, "r"); 
    copen = fopen(filename_out, "w");
    
    while ((x = fgetc(ready)) != EOF) {//end of file
        fputc(toupper(x), copen);//toupper converting to uppercase
    }
    
    fclose(ready);
    fclose(copen);
    
    printf("File conversion completed successfully!\n");
    
    return 0;
}

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