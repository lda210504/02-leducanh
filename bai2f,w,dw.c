#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);

        int n(int x)
        {
            if (x <= 1) return 0;
            if (x <= 3) return 1;
            if (x % 2 == 0 || x % 3 == 0) return 0;
            for (int i = 5; i * i <= x; i += 6)
            {
                if (x % i == 0 || x % (i + 2) == 0) return 0;
            }
            return 1;
        }

        if (n(x))
        {
            printf("%5d : YES\n", x);
        }
        else
        {
            printf("%5d : NO\n", x);
        }
    }

    return 0;
}
