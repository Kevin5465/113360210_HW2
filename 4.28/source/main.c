#include <stdio.h>

int main() {
    int code;
    double salary, hours, sales, pieces;
    while (1) {
        printf("Enter paycode (-1 to end): ");
        scanf("%d", &code);
        if (code == -1)
            break;
        switch (code) {
        case 1:
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            printf("Total pay: $%.2lf\n", salary);
            break;
        case 2:
            printf("Enter hourly wage: ");
            scanf("%lf", &salary);
            printf("Enter hours worked: ");
            scanf("%lf", &hours);
            if (hours > 40)
                salary = 40 * salary + (hours - 40) * salary * 1.5;
            else
                salary = hours * salary;
            printf("Total pay: $%.2lf\n", salary);
            break;
        case 3:
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);
            salary = 250 + 0.057 * sales;
            printf("Total pay: $%.2lf\n", salary);
            break;
        case 4:
            printf("Enter number of pieces produced: ");
            scanf("%lf", &pieces);
            printf("Enter wage per piece: ");
            scanf("%lf", &salary);
            salary = pieces * salary;
            printf("Total pay: $%.2lf\n", salary);
            break;
        default:
            printf("Invalid code\n");
        }
    }
    return 0;
}
