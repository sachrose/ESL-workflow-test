#include <stdio.h>
#include "biba.h"

vector_3d_t vector_sum (vector_3d_t a, vector_3d_t b)
{
    vector_3d_t res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    res.z = a.z + b.z;
    return res;
}

vector_3d_t vector_sub (vector_3d_t a, vector_3d_t b)
{
    vector_3d_t res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    res.z = a.z - b.z;
    return res;
}

double vector_dot (vector_3d_t a, vector_3d_t b)
{
    double res = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
    return res;
}

vector_3d_t vector_cross (vector_3d_t a, vector_3d_t b)
{
    vector_3d_t res;
    res.x = (a.y * b.z) - (a.z * b.y);
    res.y = (a.z * b.x) - (a.x * b.z);
    res.z = (a.x * b.y) - (a.y * b.x);
    return res;
}

void vector_print (vector_3d_t a)
{
    printf("Vector coordinates: %.1f, %.1f, %.1f\n", a.x, a.y, a.z);
}