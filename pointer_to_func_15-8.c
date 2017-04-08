/* Demonstration of declaring and using a pointer to a function. */

#include <stdio.h>

/* The function prototype. */

double square(double x);

/* The pointer declaration. */

double (*p)(double x);

main()
{
    /* Initialize p to point to square(). */

      p = square;

     /* Call square() two ways. */

     printf("%f  %f", square(6.6), p(6.6));
     return(0);
}

double square(double x)
{
     return x * x;
}
