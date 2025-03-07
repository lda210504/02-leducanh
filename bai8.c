#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            printf("(%.5f, %.5f, %.5f) la tam giac deu\n", a, b, c);
        }
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            printf("(%.5f, %.5f, %.5f) la tam giac vuong\n", a, b, c);
        }
        else if (a == b || b == c || a == c)
        {
            printf("(%.5f, %.5f, %.5f) la tam giac can\n", a, b, c);
        }
        else
        {
            printf("(%.5f, %.5f, %.5f) la tam giac thuong\n", a, b, c);
        }
        double chuvi = a + b + c;
        printf("Chu vi cua tam giac la: %.5f\n", chuvi);
        double p = chuvi / 2;
        double dientich = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Dien tich cua tam giac la: %.5f\n", dientich);
    }
    else
    {
        printf("Day khong phai la tam giac hop le\n");
    }


    return 0;
}
