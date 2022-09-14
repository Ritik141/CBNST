#include <stdio.h>
#include <math.h>


float fun(float x)
{
    return (pow(x, 3) - (4 * x) - 9);
}
int main()
{
    int m, n, x1, x2, x3;
    float a, b;

    printf("enter the range ");
    scanf("%d %d", &m, &n);
    for (int i = m; i + 1 < n; i++)
    {
        if ((fun((float)i)) * (fun((float)(i + 1))) < 0)
        {
            a = (float)i;
            b = (float)(i + 1);
            break;
        }
    }
    printf("a is %f and b is %f\n", a, b);
    int i = 1;
    float x = (a + b) / 2;
    do
    {
        printf("value at iteration x%d is %f\n ", i, x);

        if (fun(a) * fun(x) < 0)
            b = x;
        else if (fun(x) * fun(b) < 0)
            a = x;

        x = (a + b) / 2;

        i++;

    } while (fabs(x - a) >= 0.0001 || fabs(x - b) >= 0.0001);
}