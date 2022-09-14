#include <stdio.h>
#include <math.h>
int main()
{
   
    double x, temp, x1;
    int n;
    printf("Enter the number : ");
    scanf("%lf", &x);
    printf("Enter the decimal place  : ");
    scanf("%d", &n);
    temp = x * pow(10, n);
    int res = (int)(temp + 0.5);
    int res1 = (int)(temp);
    temp = (float)res / pow(10, n);
    x1 = (float)res1 / pow(10, n);
    printf("After round off we have : %lf\n", temp);
    printf("After truncate we have : %lf\n", x1);
    printf("absolute error %f \n", fabs(x - x1));
    printf("relative error %f \n", fabs((x - x1) / x));
    printf("percentage error %f \n", fabs((x - x1) / x) * 100);
    
}