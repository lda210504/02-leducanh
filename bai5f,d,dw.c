#include <stdio.h>

int main()
{
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la:\n", n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
