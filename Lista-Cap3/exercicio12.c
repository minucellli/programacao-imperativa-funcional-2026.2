#include <stdio.h>

int main() {
    int c;
    float fahrenheit;
    float kelvin;

    printf("Celsius\tFahrenheit\tKelvin\n");

    for (c = 0; c <= 100; c += 5) {
        fahrenheit = (9.0 * c) / 5.0 + 32;
        kelvin = c + 273.15;

        printf("%3d\t%10.2f\t%7.2f\n",
               c, fahrenheit, kelvin);
    }

    return 0;
}