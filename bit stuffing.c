int main() {
    int a[20], b[30], n, i, j = 0, count = 0;
    printf("Enter number of bits : ");
    scanf("%d", &n);
    printf("Enter the bits in the form of 0 and 1: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[j++] = a[i];
        if (a[i] == 1)
        {
            count++;
            // it there are two consecutive 1 "01" will stuff after 1's
            if (count == 2)
            {
                b[j++] = 0;
                b[j++] = 1;
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    printf("After Bit Stuffing: ");
    for (i = 0; i < j; i++) {
        printf("%d", b[i]);
    }
    return 0;
}
