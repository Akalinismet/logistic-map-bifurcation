#include <stdio.h>

/*
 * logistic_map_simulator.c
 * ------------------------
 * A simple interactive program to simulate population dynamics using
 * the logistic map equation:
 *
 *     x_(n+1) = r * x_n * (1 - x_n)
 *
 * The user provides:
 *     - Number of iterations
 *     - Initial population value (x0)
 *     - Growth rate (r)
 *
 * The program prints population values for each iteration.
 */

int main(void)
{
    int iterations = 0;
    double r = 0.0;
    double population = 0.0;

    printf("Welcome to the Population Simulator (Logistic Map)\n\n");

    printf("Enter number of iterations: ");
    scanf_s("%d", &iterations);

    printf("Enter initial population (0 < x < 1): ");
    scanf_s("%lf", &population);

    printf("Enter growth rate (r): ");
    scanf_s("%lf", &r);

    if (iterations > 0 && population > 0 && r > 0)
    {
        for (int i = 0; i <= iterations; i++)
        {
            population = r * population * (1 - population);
            printf("%d. Iteration Population: %lf\n", i, population);
        }
    }
    else
    {
        printf("Invalid input values.\n");
    }

    return 0;
}
