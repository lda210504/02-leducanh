#include <stdio.h>

int timUCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int timBCNN(int a, int b)
{
    return (a * b) / timUCLN(a, b);
}

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int ucln = timUCLN(a, b);
    int bcnn = timBCNN(a, b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}
