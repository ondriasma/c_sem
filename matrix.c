#include "matrix.h"

#include <stdlib.h>
#include <stdio.h>

struct matrix *matrix_allocate(const size_t rows, const size_t cols){
    

    if (rows == 0 || cols == 0) {
        return NULL;
    }

    struct matrix *mat = malloc(sizeof(struct matrix));
    if(!mat){
        return NULL;
    }
    
    mat->rows = rows;
    mat->cols = cols;

    mat->data = malloc(rows * sizeof(double *));  
    if (!mat->data) {
        free(mat);  
        return NULL;
    }

    for(size_t i = 0; i < rows; i++){
        mat->data[i] = matrix_addrow(cols);
        if(!mat->data[i]){
            for(size_t j = 0; j < i; j++){
                free(mat->data[j]);
            }
            free(mat->data);
            free(mat);
            return NULL;
        }
    }

    return mat;
}


double *matrix_addrow(const size_t cols){
    if (cols == 0) {
        return NULL;
    }

    double *new_row = malloc(cols * sizeof(double));

    return new_row;

}

void matrix_delrow(struct matrix *mat, size_t index){
    if (!mat || index >= mat->rows) {
        return;
    }

    free(mat->data[index]);
}


void matrix_free(struct matrix **mat) {
    if (!mat) {
        return;  
    }



    free(*mat); 
    *mat = NULL;
}


void matrix_add(struct matrix *mat, const size_t rows, const size_t cols, const double val){
    mat->data[rows][cols] = val;
}


void prepare_gauss(struct matrix *mat, const size_t row, const size_t index){
    if(mat->data[row][index] == 1){
        return;
    }
    double coef = 1 / mat->data[row][index];
    for(size_t i = 0; i < mat->cols; i++){
        mat->data[row][i] = mat->data[row][i] / coef;
    }
}