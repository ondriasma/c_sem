#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_H
#define LIST_H

struct list{
    void *vars;
    size_t length;
    size_t used;
    size_t item_size;
};


struct list *list_init(size_t length, size_t item_size);

int list_append(struct list *l, void *data);

int list_expand(struct list **l);

int list_free(struct list *l);

#endif