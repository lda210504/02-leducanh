#include <stdio.h>

int main() {
    int so;
    unsigned long long giai_thua = 1;
    scanf("%d", &so);

    if (so < 0)
        printf("Khong tinh giai thua so am.\n");
    else {
        for (int i = 1; i <= so; i++) giai_thua *= i;
        printf("Giai thua: %llu\n", giai_thua);
    }

    return 0;
}
