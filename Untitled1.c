#include <stdio.h>
int main() {
    int i, x;
    char str[100];
    printf("\nPlease enter a string:\t");
    fgets(str, sizeof(str), stdin);
    int key;
    printf("enter the key value\n");
    scanf("%d",&key);
    printf("\nPlease choose from the following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    scanf("%d", &x);
    switch (x) {
        case 1:
            for (i = 0; (i < 100 && str[i] != '\0'); i++) {
                str[i] = str[i] + key;
            }
            printf("\nEncrypted string: %s\n", str);
            break;
        case 2:
            for (i = 0; (i < 100 && str[i] != '\0'); i++) {
                str[i] = str[i] - key;
            }
            printf("\nDecrypted string: %s\n", str);
            break;

        default:
            printf("\nError: Invalid option.\n");
            return 0;
    }
    return 0;
}
