#include <stdio.h>
#include <stdio.h>

int main()
{
    double a, b, e, c, d, f;
    double delta, x, y;
    scanf("%lf %lf %lf", &a, &b, &e);
    scanf("%lf %lf %lf", &c, &d, &f);
    delta = a * d - b * c;
    if (delta != 0)
    {
        x = (e * d - b * f) / delta;
        y = (a * f - e * c) / delta;
        printf("He phuong trinh co nghiem duy nhat\n x = %.5lf\n y = %.5lf\n", x, y);
    }
    else
    {
        if ((e * d - b * f) == 0 && (a * f - e * c) == 0)
        {
            printf("He phuong trinh co vo so nghiem\n");
        }
        else
        {
            printf("He phuong trinh vo nghiem\n");
        }
    }

    return 0;
}
