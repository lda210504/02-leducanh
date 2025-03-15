#include <stdio.h>

double phanSo(int n)
{
    double result = 1.0;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
 int main()
{
    int n;
    double sum = 1.0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        sum += 1.0 / phanSo(i);
    }
      printf("%f\n", sum);

    return 0;
}
