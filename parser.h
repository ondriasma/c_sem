#ifndef PARSER_H
#define PARSER_H

#include "list.h"
#include "stack.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>

enum type {VARIABLE, NUMBER, OPPAR, CLPAR, OPERATOR1, OPERATOR2};

struct variable{
    char *name;
    double value;
};


struct bound{
    struct variable var;
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

struct token{
    char value[255];/*must be initialized or segfault in strncpy*/
    enum type type;
};

void remove_spaces(char *line);

void parse_variables(char *line, struct list *l);

int parse_constraint(char *line, struct list *l);

int tokenize(char *line, struct token *tokens);

int add_token(struct token **tokens, struct token token, size_t *size, size_t *used);

int isoperator(int c);

int isparenthesis(int c);

int shunting_yard(struct token **tokens, size_t size);


#endif