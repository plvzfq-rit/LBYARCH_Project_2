#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int c_kernel() {
    
    int x_length;
    int i;
    // int j;
    float* x;
    float* y;
    float holder = 0;
    int min;

    printf("Insert vector length: ");
    scanf("%d", &x_length);

    // if (x_length < 7) {
    //     printf("ERROR: x_length too small.");
    //     return 0;
    // }

    x = (float*) malloc (x_length);
    y = (float*) malloc (x_length - 6);

    printf("Insert vector X contents:\n");

    for (i = 0; i < x_length; i++) {
        printf("X[%d] = ", i);
        scanf("%f", x + i);
    }

    // for (i = 3; i + 3 < x_length; i++) {
    //     *(y + i - 3) = 0; 
    //     for (j = -3; j <= 3; j++) {
    //         *(y + i - 3) = *(y + i - 3) + *(x + i + j);
    //     }
    // }

    for (i = 0; i < 7; i++) {
        holder = holder + *(x + i);
    }

    *(y) = holder;

    for(i = 7; i < x_length; i++) {
        holder = holder + *(x + i) - *(x + i - 7);
        *(y + i - 6) = holder;
    }

    if (x_length - 6 < 10) {
        min = x_length - 6;
    }
    else {
        min = 10;
    }

    printf("Y array contents:\n");

    for (i = 0; i < min; i++) {
        printf("Y[%d] = %f\n", i, *(y + i));
    }

    free(x);
    free(y);

    return 0;
}