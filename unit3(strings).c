#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ASCII code printer for a string in C
int main(void)
{
    char name[256];

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("ASCII codes for '%s':\n", name);
    for (size_t i = 0; i < len; i++) {
        printf("%d", (unsigned char)name[i]);
        if (i + 1 < len) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

// Convert lowercase letters to uppercase in a string in C
// int main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
    
//     for(int i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }
//     printf("Modified string: %s", str);
//     return 0;
// }
// int main(void)
// {
//     size_t capacity = 256;
//     char *source = malloc(capacity);
//     if (source == NULL) {
//         perror("malloc");
//         return 1;
//     }

//     printf("Enter a string: ");
//     if (fgets(source, capacity, stdin) == NULL) {
//         free(source);
//         return 1;
//     }

//     size_t len = strlen(source);
//     if (len > 0 && source[len - 1] == '\n') {
//         source[len - 1] = '\0';
//         len--;
//     }

//     char *copy = malloc(len + 1);
//     if (copy == NULL) {
//         perror("malloc");
//         free(source);
//         return 1;
//     }

//     strcpy(copy, source);
//     printf("Copied string: %s\n", copy);

//     free(copy);
//     free(source);
//     return 0;
// }