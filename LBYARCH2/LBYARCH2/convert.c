#include <stdio.h>
#include <stdlib.h>

int main() {
    int* x_length = (int*) malloc(sizeof(int));
    int* i = (int*)malloc(sizeof(int));
    int* j = (int*)malloc(sizeof(int));
    int* x = (int*)malloc(sizeof(int));
    int* y = (int*)malloc(sizeof(int));
    double* holder =(double*) malloc(sizeof(double));
    int* min = (int*)malloc(sizeof(int));
    char* float_req = "%f";
    char* float_pri = "%lf";

    printf("Insert vector length: ");
    scanf("%d", x_length);

    int size_x = (*x_length - 6) * sizeof(int);
    *x = (int*)malloc(size_x);
    *y = (int*)malloc(size_x);

    printf("Insert vector X contents:\n");
    for (*i = 0; *i < *x_length; (*i)++) {
        scanf("%lf", (double*)(*x + *i));
    }

    for (*i = 0; *i < *x_length; (*i)++) {
        *holder = *(double*)(*x + *i);
        printf("%lf\n", *holder);
    }

    free(x_length);
    free(i);
    free(j);
    free(x);
    free(y);
    free(holder);
    free(min);

    return 0;
}

