#include<stdio.h>

int main()
{
    //reading from a file
    FILE * file;
    file = fopen("txtfile/text.txt", "r");
    char content[2000];
    if (file != NULL){
        fgets(content, 2000, file);
        printf("content: %s", content);     
    }
    //writing to a file
    // file = fopen("newfile.txt", "w");

    // fputs("Hello World", file);
    // fclose(file);
    return 0;
}