#include <stdio.h>
#include <stdlib.h>


struct list{
    void *vars;
    size_t length;
    size_t used;
    size_t size;
};


void list_init(struct list *l, size_t length, size_t size);

void list_append(struct list *l, struct variable var);

void list_free(struct list *l);