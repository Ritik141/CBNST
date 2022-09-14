// find the root of the poloynomial fucntion upto to given decimal points
// Wap to estimate absolute error, relative error & percentage error using round off and trun
// Wap to find the root of any polynomial expression using bisectin method correct upto 3 decimal places
// Wap to find the solution of given polynomial equation using regular falsy method correct upto 3 decimal places
#include <stdio.h>
#include <math.h>
float function_return(float x)
{
    float res;
    res = pow(x, 3) - (4 * x) - 9;
    return res;
}

int find_points()
{
    float res;
    float res1;
    for (int i = 0; i < 5; i++)
    {
        res = function_return((float)i);
        res1 = function_return((float)(i + 1));
        if (res1 < 0 && res > 0 || res1 > 0 && res < 0)
            return (float)i;
    }
    return 0;
}
float truncate(float f, int p)
{
    float temp = f * pow(10, p);
    int res = (int)(temp);
    temp = (float)res / pow(10, p);
    return temp;
}
int main()
{
    float root, temp = 0.0, diff, mid, count;
    float f_i, s_i;
    int c = 1;
    f_i = find_points();
    s_i = f_i + 1;

    do
    {
        root = function_return(mid);
        mid = (f_i * function_return(s_i) - s_i * function_return(f_i))/(function_return(s_i) - function_return(f_i));
        if (function_return(f_i) * function_return(mid) < 0)
            s_i = mid;
        else if (function_return(mid) * function_return(s_i) < 0)
            f_i = mid;

        printf("%d root is : %f\n", c, mid);
        diff = mid - temp;
        temp = mid;
        if (fabs(diff * 1000) < 1)
        {
            printf("root is : %f\n", truncate(mid, 3));
            break;
        }
        c++;
    } while (1);

    return 0;
}