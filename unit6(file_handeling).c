#include<stdio.h>

int main()
{
    FILE * file;
    file = fopen("newfile.txt", "w");

    fputs("Hello World", file);
    fclose(file);
    return 0;
}