#include <stdio.h>
#define N 5
int main(void)
{
    int a[N], i, min;
    printf("Enter array a:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 1; i < N; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Min is %d\n", min);
    return 0;
}
int findMin(int a[], int n)
{
    int min, i;
    min = 0;

    for (i = 1; i < N; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
    }
}