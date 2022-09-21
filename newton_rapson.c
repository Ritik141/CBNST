#include<stdio.h>
#include<math.h>
float function(float i)
{
    return pow(i , 4) - i - 10;
}
float derivative(float i)
{
    return 4 * pow(i , 3) - 1;
}

int main()
{
    int n;
    float a , b  ,x1 , x2;
    printf("Enter the range here : ");
    scanf("%d" , &n);
    for (int i = 0 ; i < n  ; i++)
    {
        if ((function((float)i)) * (function((float)(i + 1))) < 0)
        {
            a = (float)i;
            b = (float)(i + 1);
            break;
        }
    }

    x1 = (a + b)/2;
    int i = 1;
    while(1)
    {
        x2 = x1 - (function(x1) / derivative(x1));
        printf("%d iteration x is : %f\n" , i , x2);
        if(fabs(x2 - x1) <= 0.0001){ printf("root is : %f\n" ,x2);break;} 
        x1 = x2;
        i++;
    }
    return 0;
}