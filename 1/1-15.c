#include <stdio.h>
float f2c(float);

int main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 200;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, f2c(fahr));
        fahr = fahr + step;
    }
}

float f2c(float fahr) 
{
    return (5.0/9.0) * (fahr-32.0);
}
