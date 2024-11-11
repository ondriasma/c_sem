#include "list.h"

#include <stdio.h>
#include <stdlib.h>


void list_init(struct list *l, size_t length, size_t size){
    if(!l || length == 0){
        return;
    }
    l->used = 0;
    l->length = length;
    l->size = size;
    l->vars = NULL;
}

void list_append(struct list *l, void *data){
    if(l->length == 0){
        l->vars = malloc(l->size);
        l->length++;
    }
    if(l->used == l->length){
        l->length *= 2;
        l->vars = realloc(l->vars, l->length * l->size);
        if(l->vars == NULL){
            return;
        }
    }

    void *index = (char *)l->vars + (l->used * l->size); /*pointer na začátek + počet obsazených prvků * velikost prvku*/
    memcpy(index, data, l->size);
    l->used++;
}

void list_free(struct list *l){
    free(l->vars);
    l->vars = NULL;
    l->length = 0;
    l->used = 0;
}
