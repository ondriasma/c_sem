#include <float.h>
#include <stdio.h>
#include <stdlib.h>

struct variable{
    char *name;
    double value;
};


struct bound{
    variable var;
    double lower;
    double upper;
};

struct function{
    int minimizing;
    struct list vars;
};

struct constraint{
    char con_operator; /*< >*/
    int strict; /*=*/
    struct list vars;
};

