#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "matrix.h"
#include "parser.h"
#include "stack.h"

#define INIT_CONSTANT 4

int main(){

    struct list *variables = list_init(INIT_CONSTANT, sizeof(struct variable));
    struct list *bounds = list_init(INIT_CONSTANT, sizeof(struct bound));
    struct function;
    struct list *constraints = list_init(INIT_CONSTANT, sizeof(struct constraint));
    char line[255];

    

    FILE *my_file = fopen("vyroba.lp", "r");
        if(my_file == NULL){
            printf("error opening file");
            return 1;
        }



    while(fgets(line, sizeof(line), my_file)){
        if (strncmp(line, "/", 1) == 0)
        {
            continue;
        }
        
        /*remove_spaces(line);*/

        printf("%s", line);

        if(strncmp(line, "Subject", 7) == 0){
            puts("asf");

            if (fgets(line, sizeof(line), my_file)) {
                printf("Processing next line: %s", line);
                parse_constraint(line, constraints);
            
        }
            
        }

        if (strncmp(line, "Minimize", 8) == 0 || strncmp(line, "Maximize", 8) == 0) {
            	puts("detected");
            }
        }

        
        

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

    fclose(my_file);

    return EXIT_SUCCESS;
}