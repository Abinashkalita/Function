#include <stdio.h>
 int main()
 {
    //°F = (°C × 9/5) + 32
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius\n");
    scanf("%f", &celsius);

    fahrenheit = ( celsius * 9/5 ) + 32;

    printf("Temperature in fahrenheit is %f\n",fahrenheit);

    return 0;
 }