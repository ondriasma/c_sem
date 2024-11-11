#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"
#include "parser.h"

int main(){

    struct variable variables[] = NULL;
    struct bound bounds[] = NULL;
    struct function;
    struct constraint cons[] = NULL;

    struct matrix *tableau = matrix_allocate(5,5);

    for (size_t i = 0; i < tableau->rows; i++) {
        for (size_t j = 0; j < tableau->cols; j++) {
            tableau->data[i][j] = 2.0; 
        }
    }

    matrix_add(tableau, 2, 2, 3.56789);
    for(size_t i = 0; i < tableau->rows; i++) {
        for (size_t j = 0; j < tableau->cols; j++) {
            printf("%.2f ", tableau->data[i][j]);
        }
        printf("\n");
    }



    return EXIT_SUCCESS;
}