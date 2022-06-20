#include<stdio.h>
int main() {
    int pdCode1,pdCode2, pdQuantity1,pdQuantity2;
    double pdSalary1,pdSalary2;
    scanf("%d %d %lf", &pdCode1, &pdQuantity1, &pdSalary1);
    scanf("%d %d %lf", &pdCode2, &pdQuantity2, &pdSalary2);
    printf("VALOR A PAGAR: R$ %0.2lf\n", (pdQuantity1*pdSalary1)+(pdQuantity2*pdSalary2));
}