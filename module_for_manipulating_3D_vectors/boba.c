#include <stdio.h>
#include "biba.h"

int main()
{
    vector_3d_t a = {1.2, 3.4, 5.6};
    vector_3d_t b = {7.8, 9.0, 1.2};

    printf("a-");
    vector_print(a);
    printf("b-");
    vector_print(b);

    printf("\t*** Addition ***\n"); 
    vector_print(vector_sum(a, b));

    printf("\t*** Subtraction ***\n");
    vector_print(vector_sub(a, b));

    printf("\t*** Dot Product ***\n%.1f\n", vector_dot(a, b));

    printf("\t*** Cross Product ***\n");
    vector_print(vector_cross(a, b));
    
    return 0;
}