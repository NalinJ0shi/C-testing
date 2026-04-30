#include <stdio.h>

int main() {
    FILE * ftpr;
    ftpr = fopen("text.txt","r");

    char content[100];
    if(ftpr != NULL){
        while(fgets(content, 100, ftpr) != NULL){
            printf("Content: %s", content);
        }
    }
    fclose(ftpr);
    return 0;
}