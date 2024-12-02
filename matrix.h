
#ifndef MATRIX_H
#define MATRIX_H

#include <stddef.h>





typedef struct matrix{
    double **data;  // Pointer to an array of pointers (rows)
    size_t rows;    // Number of rows
    size_t cols;    // Number of columns
};



struct matrix *matrix_allocate(const size_t rows, const size_t cols);


double *matrix_addrow(const size_t cols);


void matrix_delrow(struct matrix *mat, size_t index);


void matrix_free(struct matrix **mat);


void matrix_add(struct matrix *mat, const size_t rows, const size_t cols, const double val);


void matrix_print(const struct matrix *mat);


double matrix_get(const struct matrix *mat, const size_t row, const size_t col);


void matrix_set(struct matrix *mat, const size_t row, const size_t col, double val);








#endif
