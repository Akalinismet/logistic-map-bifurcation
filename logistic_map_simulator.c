#include <stdio.h>

/*
 * logistic_map_bifurcation.c
 * ---------------------------
 * Generates data for a bifurcation diagram of the logistic map.
 *
 * Equation:
 *     x_(n+1) = r * x_n * (1 - x_n)
 *
 * Output:
 *     A CSV file named "bifurcation.csv" containing pairs of (r, x)
 *     values after skipping the initial transient iterations.
 *
 * Parameters:
 *     r_min, r_max  : Range of growth rate (r) values
 *     r_step        : Increment for each step of r
 *     iterations    : Total number of iterations for each r
 *     skip          : Number of initial iterations to discard
 *
 * Usage:
 *     Compile and run the program.
 *     The resulting file can be plotted using Python (see plot_bifurcation.py).
 */

int main(void)
{
    FILE* file;
    fopen_s(&file, "bifurcation.csv", "w");
    if (!file)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    double r_min = 2.5;
    double r_max = 4.0;
    double r_step = 0.001;
    int iterations = 1000;
    int skip = 900;

    for (double r = r_min; r <= r_max; r += r_step)
    {
        double x = 0.5; // initial population value

        for (int i = 0; i < iterations; i++)
        {
            x = r * x * (1 - x);
            if (i > skip)
            {
                fprintf(file, "%lf,%lf\n", r, x);
            }
        }
    }

    fclose(file);
    printf("bifurcation.csv has been created successfully.\n");
    return 0;
}
