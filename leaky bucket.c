#include <stdio.h>
int main() {
    int n, output_rate, bucket_size, incoming, overflow = 0, bucket = 0;
    printf("Enter the number of time intervals: ");
    scanf("%d", &n);
    printf("Enter the output rate (packets/sec): ");
    scanf("%d", &output_rate);
    printf("Enter the bucket size (maximum capacity): ");
    scanf("%d", &bucket_size);
    int incoming_packets[n];
    printf("Enter the number of packets arriving at each interval:\n");
    for (int i = 0; i < n; i++) {
        printf("Time %d: ", i + 1);
        scanf("%d", &incoming_packets[i]);
    } printf("\nSimulating Leaky Bucket Algorithm...\n");
    printf("Time    Incoming    Bucket Before    Sent    Bucket After    Overflow\n");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        incoming = incoming_packets[i];
        bucket += incoming;
        if (bucket > bucket_size) {
            overflow = bucket - bucket_size;
            bucket = bucket_size;
        } else {
            overflow = 0;
        }    int bucket_before = bucket;
        int sent = (bucket >= output_rate) ? output_rate : bucket;
        bucket -= sent;
        printf("%-8d%-11d%-16d%-8d%-14d%-8d\n", i + 1, incoming, bucket_before, sent, bucket, overflow);
    }   int time = n + 1;
    while (bucket > 0) {
        int sent = (bucket >= output_rate) ? output_rate : bucket;
        int bucket_before = bucket;
        bucket -= sent;
        printf("%-8d%-11d%-16d%-8d%-14d%-8d\n", time++, 0, bucket_before, sent, bucket, 0);
    }
}
