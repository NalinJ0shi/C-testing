#include <stdio.h>
// int main() {
//     int arr[10];
//     printf("Enter 10 integers:\n");
//     for(int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//     }
//     // Bubble sort in ascending order
//     for(int i = 0; i < 9; i++) {
//         for(int j = 0; j < 9 - i; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("Sorted array in ascending order:\n");
//     for(int i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }


// int main(){
//     // int arr[] = {2,3,4,5,6,7};    
//     int n = 6;

//     for(int i = n; i >= 1; i--){
//         for(int j = 0; j< i; j++){
//             // printf("%d", arr[j]);
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//----------------------------------------------------------------------------------------------
// question 2: linear search in an array
// int main(){
//      int arr[20] = {21,32,43,54,65,23,43,54,65,76,87,98,12,23,34,45,56,67,78,89};
//     int target;
//     int found = 0;
//     int position = -1;
    
int main(){
    int arr[20] = {21,32,43,54,65,23,43,54,65,76,87,98,12,23,34,45,56,67,78,89};
    int target;
    int found = 0;
    int position = -1;
        printf("Enter the integer to search: ");
    if(scanf("%d", &target) == 0){
        return 1;
    }
    for (int i = 0; i < 20; i++){
        if(arr[i] == target){
            found = 1;
            position = i;
            break;
        }
    }
    if(found){
        printf("Integer %d found at position %d\n", target, position);
    } else {
        printf("Integer %d not found in the array\n", target);
    }
    return 0;
}



//----------------------------------------------------------------------------------------------
//question 3: matrix multiplication 
// # define N 3
// int main() {
//     int A[N][N];
//     int B[N][N];
//     int C[N][N];
    
//     printf("Enter your first element: \n");
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("Enter your second matrix: \n");
//         for(int i = 0; i<N; i++){
//             for(int j = 0; j<N; j++){
//                 scanf("%d", &B[i][j]);
//             }
//     }
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//                 C[i][j] = 0;
//             }
//     }
        
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             C[i][j] += A[i][j] * B[i][j];
//         }
//     }
    
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             C[i][j] += A[i][j] * B[i][j];
//         }
//     }
//     printf("Result: ");
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }