#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0, rate;
    int year;
    for (rate = 10.0; rate <= 12.0; rate += 0.5) {
        printf("Rate: %.1f%%\n", rate);
        for (year = 1; year <= 15; ++year) {
            double amount = principal * pow(1 + rate / 100, year);
            printf("Year %d: $%.2lf\n", year, amount);
        }
    }
    return 0;
}
