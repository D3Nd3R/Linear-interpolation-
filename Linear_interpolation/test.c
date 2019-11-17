#include "test.h"
#include "linear_interpolation.h"

#include <assert.h>
#include <stdio.h>

void test1()
{
    float x[] = {2.,4.};
    float y[] = {4.,8.};

    float rez = linear_interpolation(x, y, 2, 3);
    assert((int)rez == 6);
    printf("test1a passed\n");

    rez = linear_interpolation(x, y, 2, 2);
    assert((int)rez == 4);
    printf("test1b passed\n");

    rez = linear_interpolation(x, y, 2, 4);
    assert((int)rez == 8);
    printf("test1c passed\n");

    rez = linear_interpolation(x, y, 2,5);
    assert((int)rez == 8);
    printf("test1d passed\n");
}
