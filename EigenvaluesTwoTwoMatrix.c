#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, j, x, b, c;
    int d, e, k, l, f, a[6][6], g;
    printf("Enter the value of the 2*2 matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is:\n");
  
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    b = (a[0][0] + a[1][1]);
    c = (a[0][0] * a[1][1]) - (a[0][1] *a[1][0]);

    d = b + sqrt(pow(b, 2) - 4 * c);
    f = b - sqrt(pow(b, 2) - 4 * c);
    e = d / 2;
    g = f / 2;
    printf("The value of First EigenValue = %d \n", e);
    printf("The value of Second Eigenvalue = %d \n", g);

    return 0;
}