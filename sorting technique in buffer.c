#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fslno[20];
char finfo[20][20];
int n;

void sort() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fslno[i] > fslno[j]) {
                int temp = fslno[i];
                fslno[i] = fslno[j];
                fslno[j] = temp;
                char temp1[20];
                strcpy(temp1, finfo[i]);
                strcpy(finfo[i], finfo[j]);
                strcpy(finfo[j], temp1);
            }
        }
    }
}

int main() {
    printf("Enter number of frames: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter sequence number: ");
        scanf("%d", &fslno[i]);
        printf("Enter the frame contents for sequence number %d: ", fslno[i]);
        scanf("%s", finfo[i]);
    }
    sort();
    printf("\nThe frames in sequence are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\n", fslno[i], finfo[i]);
    }
    return 0;
}
