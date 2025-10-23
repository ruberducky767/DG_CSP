//financeal calculator DG 6th
#include <stdio.h>
#include <stdlib.h>

void question(const char *type, double *out) {
    printf("What is your %s ", type);

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

    printf("\nTotal costs: %.2f\nRecommended savings (20%%): %.2f\nRemaining after costs and savings: %.2f\n",
           total_cost, savings, remaining);

    return 0;
}
//DG 6th financeal calculator
#include <stdio.h>
#include <stdlib.h>

void question(const char *type) {
    printf("What is your %s ", type);

}
    per= (cost / income)*100
    printf("the percent of your income that goes to %s is ")
}

int main(void) {

    question("income:");
    question("rent:");
    question("utilities:");
    question("groceries:");
    question("transportation:");

 

    return 0;
}