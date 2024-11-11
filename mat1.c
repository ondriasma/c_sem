#include <stdlib.h>
#include <stdio.h>

// Define a type for the matrix
typedef struct {
    double **data;  // Pointer to an array of pointers (rows)
    size_t rows;    // Number of rows
    size_t cols;    // Number of columns
} Matrix;

// Function to allocate a new row
double *matrix_addrow(const size_t cols) {
    return malloc(cols * sizeof(double));  // Allocate memory for a new row
}

// Function to allocate a matrix
Matrix *matrix_allocate(const size_t rows, const size_t cols) {
    if (rows == 0 || cols == 0) {
        return NULL;  // Check for valid dimensions
    }

    Matrix *mat = malloc(sizeof(Matrix));  // Allocate memory for the matrix structure
    if (!mat) {
        return NULL;  // Return NULL if allocation fails
    }

    mat->rows = rows;
    mat->cols = cols;

    mat->data = malloc(rows * sizeof(double *));  // Allocate memory for the row pointers
    if (!mat->data) {
        free(mat);  // Clean up if allocation fails
        return NULL;
    }

    // Allocate memory for each row
    for (size_t i = 0; i < rows; i++) {
        mat->data[i] = matrix_addrow(cols);
        if (!mat->data[i]) {
            // If allocation fails, free already allocated rows
            for (size_t j = 0; j < i; j++) {
                free(mat->data[j]);  // Free previously allocated rows
            }
            free(mat->data);  // Free the array of row pointers
            free(mat);  // Free the matrix structure
            return NULL;  // Return NULL to indicate failure
        }
    }

    return mat;  // Return the allocated matrix
}

// Function to delete a row
void matrix_delrow(Matrix *mat, size_t index) {
    if (!mat || index >= mat->rows) {
        return;  // Ensure matrix is valid and index is within bounds
    }
    free(mat->data[index]);  // Free the allocated memory for the specified row
}

// Function to free the allocated matrix
void matrix_free(Matrix *mat) {
    if (!mat) {
        return;  // Check if the matrix pointer is valid
    }

    // Free each row
    for (size_t i = 0; i < mat->rows; i++) {
        matrix_delrow(mat, i);  // Free each row
    }

    free(mat->data);  // Free the array of row pointers
    free(mat);        // Free the matrix structure
}

// Function to set a value in the matrix
void matrix_add(Matrix *mat, size_t row, size_t col, double val) {
    if (mat && row < mat->rows && col < mat->cols) {
        mat->data[row][col] = val;  // Set the value at the specified position
    }
}

// Example usage
int main() {
    size_t rows = 3;
    size_t cols = 4;

    Matrix *mat = matrix_allocate(rows, cols);
    if (mat == NULL) {
        fprintf(stderr, "Memory allocation failed for matrix\n");
        return 1;  // Exit if allocation fails
    }

    // Initialize the matrix with some values
    for (size_t i = 0; i < mat->rows; i++) {
        for (size_t j = 0; j < mat->cols; j++) {
            matrix_add(mat, i, j, (double)(i * mat->cols + j) / 2.0);  // Example initialization
        }
    }

    // Print the matrix
    for (size_t i = 0; i < mat->rows; i++) {
        for (size_t j = 0; j < mat->cols; j++) {
            printf("%.2f ", mat->data[i][j]);
        }
        printf("\n");
    }

    // Free the allocated matrix
    matrix_free(mat);

    return 0;  // Successful completion
}
