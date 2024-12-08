#include <stdio.h>
int main()
{
    int w, f, frames[50];
    printf("Enter window size: ");
    scanf("%d", &w);
    printf("\nEnter number of frames to transmit: ");
    scanf("%d", &f);
    printf("\nEnter %d frames: ", f);
    for (int i = 0; i < f; i++)
    {
        scanf("%d", &frames[i]);
    }
    printf("\nWith sliding window protocol, the frames will be sent in the following manner (assuming no corruption of frames):\n\n");
    printf("Waiting for acknowledgements...\n");
    for (int i = 0; i < f; i++)
    {
        printf("%d ", frames[i]);
        if ((i + 1) % w == 0 || i == f - 1)
        {
            printf("\nAcknowledgement of above frames is received by sender\n\n");
        }
    }
    return 0;
}
