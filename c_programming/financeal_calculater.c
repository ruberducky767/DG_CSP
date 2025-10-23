#include <stdio.h>
#include <stdlib.h>

void question(const char *type, double *out) {
    printf("what is your %s ", type);
    if (scanf("%lf", out) != 1) {
        fprintf(stderr, "invalid input for %s\n", type);
        exit(1);
    }
}

void percent(const char *type, double cost, double income) {
    double per = (income == 0.0) ? 0.0 : (cost / income) * 100.0;
    printf("the percent of your income that goes to %s is %.2f%%\n", type, per);
}

int main(void) {
    double income, rent, utilities, groceries, transportation;

    question("income:", &income);
    question("rent:", &rent);
    question("utilities:", &utilities);
    question("groceries:", &groceries);
    question("transportation:", &transportation);

    double total_cost = rent + utilities + groceries + transportation;
    double savings = income * 0.20;
    double remaining = income - total_cost - savings;

    printf("\n total costs: %.2f\n recommended savings (20%%): %.2f\n income: %.2f\n remaining after costs and savings: %.2f\n\n",
           total_cost, savings, income, remaining);

    percent("rent", rent, income);
    percent("utilities", utilities, income);
    percent("groceries", groceries, income);
    percent("transportation", transportation, income);

    return 0;
}