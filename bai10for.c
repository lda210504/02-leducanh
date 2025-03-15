#include <stdio.h>

int main()
{
    int n;

    printf("nhap so thu n trong day Fibonacci: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("nhap mot so nguyen duong.\n");
    }
    else
    {
        int f1 = 1, f2 = 1, fn;

        if (n == 1 || n == 2)
        {
            printf("So Fibonacci thu %d la: 1\n", n);
        }
        else
        {
            for (int i = 3; i <= n; i++)
            {
                fn = f1 + f2;
                f1 = f2;
                f2 = fn;
            }
            printf("So Fibonacci thu %d la: %d\n", n, fn);
        }
    }
    return 0;
}
