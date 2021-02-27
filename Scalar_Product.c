/* This program calculates the scalar product of two float vectors u and v of the same size.
u and v are represented in the program as two one-dimensional arrays defined with a size of
maximum MAX declared at the start of the programme as a symbolic constant. */

#include <stdio.h>

#define MAX 50

float ScalarProduct(float *u,float *v, int dim); /*The dimension of u and v (i.e. the number of elements) will be entered using the keyboard and stored in a variable.
Only the first dims of the first cells of the two tables are therefore used. */

main(){

    float u[MAX];
    float v[MAX];
    int dim;
    
    printf("Choose the tab size (Max.%d) : ", MAX);
    scanf("%d", &dim);

    printf("Choose the value of u : \n");
    for (int i = 0; i < dim; i++){
        float a;
        printf("Here the %d value : ", i);
        scanf("%f", &a);
        u[i] = a;
    }

    printf("Choose the value of n : \n");
    for (int i = 0; i < dim; i++){
        float a;
        printf("Here the %d value : ", i);
        scanf("%f", &a);
        v[i] = a;
    }

    printf("The scalar product is %f", ScalarProduct(u, v, dim));
    return 0;
}

float ScalarProduct(float u[], float v[], int dim){

    float SP = 0.0f;

    for (int i = 0; i < dim; i++){

        SP += u[i] * v[i];
    }

    return SP;
}
