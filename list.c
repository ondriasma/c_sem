#include "list.h"

#include <stdio.h>
#include <stdlib.h>

#define EXPAND_CONSTANT 3

struct list *list_init(size_t length, size_t item_size){
    struct list *nl;

    if(length == 0 || item_size == 0){
        return NULL;
    }

    nl = malloc(sizeof(struct list));
    if(!nl){
        return NULL;
    }


    nl->used = 0;
    nl->length = length;/*nedává smysl*/
    nl->item_size = item_size;
    nl->vars = malloc(length * item_size);
    if(!nl->vars){
        free(nl);
        return NULL;
    }

    return nl;
}

int list_append(struct list *l, void *data){
    if(l->length == 0){
        return 0;
    }
    if(l->used >= l->length){
        list_expand(&l);
    }

    void *index = (char *)l->vars + (l->used * l->item_size); /*pointer na začátek + počet obsazených prvků * velikost prvku*/
    memcpy(index, data, l->item_size);
    l->used++;

    return 1;
}

int list_expand(struct list **l){
    if(!l || !(*l)){
        return 0;
    }

    (*l)->length += EXPAND_CONSTANT;
    struct list *temp = realloc((*l)->vars, (*l)->length);
    if(!temp){
        printf("realloc failed\n");
        (*l)->length -= EXPAND_CONSTANT;
        return 0;
    }

    (*l)->vars = temp;

    return 1;

}

int list_free(struct list *l){
    if(!l){
        return 0;
    }

    free(l->vars);
    l->vars = NULL;
    l->length = 0;
    l->used = 0;
    free(l);

    return 1;
}
