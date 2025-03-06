#include <stdio.h>

int main()
{
    int day, month, year;
    printf("day: ");
    scanf("%d", &day);
    printf("month: ");
    scanf("%d", &month);
    printf("year: ");
    scanf("%d", &year);
    printf("Today is %02d/%02d/%04d\n", day, month, year);
    return 0;
}
