#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Moi x la nghiem\n");
            }
            else
            {
                printf("Phuong trinh vo nghiem\n");
            }
        }
        else
        {
            double x = -c / b;
            printf("Phuong trinh co 1 nghiem don\n");
            printf("x = %.5f\n", x);
        }
    }
    else
    {
        double delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("x1 = %.5f\n", x1);
            printf("x2 = %.5f\n", x2);
        }
        else if (delta == 0)
        {
            double x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep\n");
            printf("x1 = x2 = %.5f\n", x);
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }
    }

    return 0;
}
