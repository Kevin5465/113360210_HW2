#include <stdio.h>
int main() {
    double sales, salary;
    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
        if (sales == -1) {
            break;
        }
        salary = 200 + (0.09 * sales);
        printf("Salary is: $%.2lf\n", salary);
    }
    return 0;
}
