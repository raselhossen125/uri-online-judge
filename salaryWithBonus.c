#include<stdio.h>
int main() {
    char str;
    double salary, tSold;
    scanf("%s %lf %lf", &str, &salary, &tSold);
    printf("TOTAL = R$ %0.2lf\n", salary+(tSold*.15));
}