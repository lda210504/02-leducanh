#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int n;
    double sum=0;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        sum = sum + 1.0/i;
    }
    printf("%f\n", sum);
    return 0;
}
