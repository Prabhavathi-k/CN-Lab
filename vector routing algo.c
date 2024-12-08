#include<stdio.h>
#define MAX 10
#define INFINITY 999
int main() {
  int n, i, j;
  int costMatrix[MAX][MAX];
  printf("Enter the number of routers: ");
  scanf("%d", &n);
  printf("Enter the cost matrix:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &costMatrix[i][j]);
      if (costMatrix[i][j] == 0) {
        costMatrix[i][j] = INFINITY;
      }
    }
  }
 int distance[MAX], via[MAX], k;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i == j)
      {
        distance[j] = 0;
      }
      else
      {
        distance[j] = costMatrix[i][j];
      }
      via[j] = j;
    }
    for (k = 0; k < n; k++)
    {
      for (j = 0; j < n; j++)
      {
        if (distance[j] > costMatrix[i][k] + costMatrix[k][j])
        {
          distance[j] = costMatrix[i][k] + costMatrix[k][j];
          via[j] = k;
        }
      }
    }
    printf("\nRouter %d:\n", i + 1);
    for (j = 0; j < n; j++) {
      printf("To node %d via node %d: Distance = %d\n", j + 1,via[j] + 1, distance[j]);
    }
  }
  return 0;
}
