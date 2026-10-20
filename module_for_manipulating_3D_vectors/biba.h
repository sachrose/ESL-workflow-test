#ifndef BIBA_H
#define BIBA_H

typedef struct vector{
    double x;
    double y;
    double z;
} vector_3d_t;  //Data type

vector_3d_t vector_sum (vector_3d_t a, vector_3d_t b);      // a + b
vector_3d_t vector_sub (vector_3d_t a, vector_3d_t b);      // a - b
double vector_dot (vector_3d_t a, vector_3d_t b);           // a * b
vector_3d_t vector_cross (vector_3d_t a, vector_3d_t b);    // a x b
void vector_print (vector_3d_t a);                          // print vector's (x, y, z)

#endif