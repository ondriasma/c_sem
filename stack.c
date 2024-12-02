#include "parser.h"
#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

#define EXPAND_CONSTANT 3


struct stack *stack_init(size_t capacity, size_t item_size){
    struct stack *ns;

    if(capacity == 0 || item_size == 0){
        return NULL;
    }

    ns = malloc(sizeof(struct stack *));
    if(!ns){
        return NULL;
    }

    ns->capacity = capacity;
    ns->item_size = item_size;
    ns->stack_pointer = 0;
    ns->tokens = malloc(capacity * item_size);
    if(!ns->tokens){
        free(ns);
        return NULL;
    }

    return ns;
}

int stack_push(struct stack *s, struct token tok){
    if(!s){
        return 0;
    }

    if(s->stack_pointer >= s->capacity){
        if(stack_expand(&s)){
            return 0;
        }
    }

    s->tokens[s->stack_pointer] = tok;
    s->stack_pointer++;

    return 1;
        
}

int stack_expand(struct stack **s){
    if(!s || !(*s)){
        return 0;
    }

    (*s)->capacity += EXPAND_CONSTANT;
    struct stack *temp = realloc((*s)->tokens, (*s)->capacity);
    if(!temp){
        printf("realloc failed\n");
        (*s)->capacity -= EXPAND_CONSTANT;
        return 0;
    }

    (*s)->tokens = temp;

    return 1;
}

struct token stack_pop(struct stack *s){
    struct token temp = {NULL, 0};

    if(!s || s->stack_pointer == 0){
        return temp;
    }

    temp = s->tokens[s->stack_pointer];

    s->stack_pointer--;

    return temp;
}


struct token stack_top(struct stack *s){
    struct token temp = {NULL, 0};
    if(!s){
        return temp;
    }

    temp = s->tokens[s->stack_pointer];


    return temp;
}