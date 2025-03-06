#include <stdio.h>

int main()
{
    float banKinh, dienTichBeMat, theTich;
    const float PI = 3.14;
    scanf("%f", &banKinh);
    dienTichBeMat = 4 * PI * banKinh * banKinh;
    theTich = (4.0 / 3.0) * PI * banKinh * banKinh * banKinh;
    printf("dien tich be mat cua hinh cau: %.2f\n", dienTichBeMat);
    printf("the tich cua hinh cau: %.2f\n", theTich);

    return 0;
}
