#include <stdio.h>

int main(){
    int x = 4;// 0100
    int y = 2;// 0010
    int z = 0;// 0110

    // z = x | y; 
    // printf("z = %d" , z);
    z = x ^ y;
    printf("z = %d", z);
    return 0;

}