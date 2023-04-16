#include <stdio.h>
int main()
{
    double a = 23.323;
    double b = 5.233;
    double c = 5.233;
    double d;
    printf("Enter Two Numbers ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (a * b) * c;
    printf("This is the result : c = %.2lf ", d);
}