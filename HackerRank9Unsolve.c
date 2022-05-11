#include <stdio.h>
int main()
{
    int n;
    int j;
    int i;
    int r;
    int matrix[20][20];

    scanf("%d", &n);

     r=(2*n-1);
    for (i = 1; i < r; i++)
    {
        matrix[i][0] = n;
        printf("%d\t", matrix[i][0]);
        for (j = 0; j < r; j++)
        {
            matrix[0][j] = n;
            printf("%d\t", matrix[0][j]);
        }
        printf("\n");
    }

    return 0;
}