#include <stdio.h>
#include <math.h>
// function is x^3 - 2x^2 - 4 = 0
float gx_of_fx(float x)
{
    return pow((2 * pow(x, 2) + 4), 1 / 3.0);
}
float fun(float x)
{
    return (4 * x) / (3*pow((2*pow(x, 2) + 4), 2 / 3.0));
}
int main()
{
    int n;
    float a , b ,x1, x2;
    printf("Enter the interval here : ");
    scanf("%f %f", &a, &b);
    if (fun(a) <= 1 && fun(b) <= 1)
        printf("Values of a and b is justified : \n");
    else
    {
        printf("Values of a and b is not justified Enter again.....\n");
        return 0;
    }
    x1 = (a + b) / 2;
    int i = 1;
    while (1)
    {
        x2 = gx_of_fx(x1);
        printf("%d iteration x is : %f\n", i, x2);
        if (fabs(x2 - x1) <= 0.0001)
        {
            printf("root is : %f\n", x2);
            break;
        }
        x1 = x2;
        i++;
    }
    return 0;
}