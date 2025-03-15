#include <stdio.h>

int main()
{
    int n, temp, binary[32], i = 0;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("khong hop le.\n");
        return 1;
    }
    printf("Dang nhi phan (2): ");
    temp = n;
    while (temp > 0)
    {
        binary[i] = temp % 2;
        temp /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    printf("Dang bat phan (8): %o\n", n);
    printf("Dang thap luc phan (16): %X\n", n);

    return 0;
}
