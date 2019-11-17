#include "linear_interpolation.h"


float interplate(float xL, float yL, float xR, float yR, float x)
{
    float dydx = ( yR - yL ) / ( xR - xL );
    return yL + dydx * ( x - xL );
}

float linear_interpolation(float *x, float *y, unsigned int size, float val)
{
    if (!x || !y || size == 0) {return 0.f;}

     //check bounds
    if (val <= x[0]) { return y[0]; }
    if (val >= x[size - 1]) { return y[size - 1]; }

    unsigned int ii = 0;

    for (ii = 0; ii < size - 1; ++ii)
    {
        if (val >= x[ii] && val <= x[ii + 1]){ break; }
    }

    return interplate(x[ii], y[ii], x[ii + 1], y[ii + 1], val);
}
